//agerdação dos documentos:
db.vendas.aggregate([
    {
        $group: {
            _id: "$cod_venda",
            data_venda: { $first: "$data_venda" },
            cod_cliente: { $first: "$cod_cliente" },
            nome_cliente: { $first: "$nome_cliente" },
            produtos: {
                $push: {
                    cod_produto: "$cod_produto",
                    descricao: "$descricao",
                    nome: "$nome",
                    categoria: "$categoria",
                    marcas: "$marcas",
                    valor: "$valor",
                    qtd: "$qtd"
                }
            }
        }
    },
    {
        $out: "vendas2"
    }
])

//3 - Escreva uma consulta de agregação no MongoDB para calcular o valor médio de vendas na coleção "vendas" agrupadas por marca.
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $group: {
            _id: "$produtos.marcas",
            mediaVendas: { $avg: "$produtos.valor" }
        }
    }
])

// 4 - Escreva uma consulta de agregação no MongoDB para calcular o total de produtos vendidos na coleção "vendas" agrupadas por código do cliente
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $group: {
            _id: "$cod_cliente",
            mediaVendas: { $avg: "$produtos.qtd" }
        }
    }
])

//5 Escreva uma consulta de agregação no MongoDB para identificar o produto mais vendido na coleção "vendas", com base no campo "QTD" em cada documento
db.vendas2.aggregate([
    { $unwind: "$produtos" },
    {
        $group: {
            _id: {
                _id: "$_id",
                nome_cliente: "$nome_cliente",
                cod_produto: "$produtos.cod_produto"
            },
            qtd: { $sum: "$produtos.qtd" }
        }
    },
    { $sort: { qtd: -1 } },
    { $limit: 5 },
    {
        $project: {
            _id: 0,
            cod_produto: "$_id.cod_produto",
            nome_cliente: "$_id.nome_cliente",
            qtd: 1
        }
    }
])

// 6 Escreva uma consulta de agregação no MongoDB para calcular o total de vendas na coleção "vendas" agrupadas por data de venda.
db.vendas2.aggregate([
    {
      $unwind: "$produtos"
    },
    {
      $group: {
        _id: "$data_venda",
        totalVendas: { $sum: "$produtos.qtd" }
      }
    },
    {
      $sort: { _id: 1 }
    }
  ])

db.vendas2.aggregate([
    {
      $unwind: "$produtos"
    },
    {
      $group: {
        _id: {
          day: { $dayOfMonth: "$data_venda" },
          month: { $month: "$data_venda" },  
          year: { $year: "$data_venda" }
        },
        totalVendas: { $sum: "$produtos.qtd" }
      }
    },
    {
      $sort: { _id: 1 }
    }
  ])


//18 - Média do valor das vendas por ano.
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $group: {
            _id: { $year: "$data_venda" },
            media: { $avg: "$produtos.valor" }
        }
    },
    {
        $sort: { _id: 1 }
    }
])

// 19.Selecione as vendas com valor entre 10 e 30.
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $match: {
            "produtos.valor": { $gte: 10, $lte: 30 }
        }
    },
    {
        $project: {
            cod_cliente: "$cliente.cod_cliente",
            cod_produto: "$produtos.cod_produto",
            cod_venda: "$_id",
            qtd: "$produtos.qtd",
            valor: "$produtos.valor"
        }
    }
])

//20.Selecione as 5 vendas com maior valor.
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    { $sort: { valor: -1 } },
    { $limit: 5 },
    {
        $project: {
            cod_cliente: "$cliente.cod_cliente",
            cod_produto: "$produtos.cod_produto",
            cod_venda: "$_id",
            qtd: "$produtos.qtd",
            valor: "$produtos.valor"
        }
    }
])

//21.Selecione as 5 vendas com menor valor.
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    { $sort: { valor: 1 } },
    { $limit: 5 },
    {
        $project: {
            cod_cliente: "$cliente.cod_cliente",
            cod_produto: "$produtos.cod_produto",
            cod_venda: "$_id",
            qtd: "$produtos.qtd",
            valor: "$produtos.valor"
        }
    }
])

//22. Quantidade total de produtos vendidos por mês.

db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $group: {
            _id: { $month: "$data_venda" },
            soma_qtd: { $sum: "$produtos.valor" }
        }
    },
    {
        $sort: { _id: 1 }
    }
])

//23. Valor total das vendas por mês.
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $group: {
            _id: { $month: "$data_venda" },
            soma_valor: { $sum: "$produtos.valor" }
        }
    },
    {
        $sort: { _id: 1 }
    }
])
//24. Valor total das vendas por cliente em ordem decrescente.
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $group: {
            _id: "$nome_cliente",
            total_vendas: { $sum: "$produtos.valor" }
        }
    },
    {
        $sort: { total_vendas: -1 }
    }
])

//25. Média do valor das vendas por mês.
db.vendas.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $group: {
            _id: { $month: "$data_venda" },
            media_valor: { $avg: "$produtos.valor" }
        }
    },
    {
        $sort: { _id: 1 }
    }
])