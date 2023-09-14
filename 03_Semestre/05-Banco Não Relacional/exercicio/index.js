

// $match
[{ $match: { valor: { $gte: 20 } } }]

// $group
[{ $group: { _id: "$Categoria", total_valor: { $sum: "$valor" } } }]

// $project
[{ $project: { _id: 0, nome_cliente: "$NOME_CLIENTE", valor_venda: "$valor" } }]

// $sort
[{ $sort: { valor: -1 } }]

// $limit
[{ $limit: 3 }]

// $skip
[{ $skip: 2 }]

// $unwind
[{ $unwind: "$itens" }]

// media
[{ $group: { _id: "$MARCAS", valor_medio: { $avg: "$valor" } } }]

// exercicio 11
db.vendas.aggregate([
    {
        "$group": {
            "_id": "$Categoria",
            "media_vendas": {
                "$avg": {
                    $multiply: ["$qtd", "$valor"]
                }
            }
        }
    }
])

// exercicio 12
db.vendas.aggregate([
    {
        "$group": {
            "_id": "$Categoria",
            "min_valor": {
                "$min": "$valor"
            },
            "max_valor": {
                "$max": "$valor"
            }
        }
    }
])

// exercicio 13
db.vendas.aggregate([
    {
        "$group": {
            "_id": {
                "marca": "$MARCAS",
                "categoria": "$Categoria"
            },
            "total_vendas": {
                "$sum": {
                    $multiply: ["$qtd", "$valor"]
                }
            }
        }
    },
    {
        "$project": {
            "marca": "$_id.marca",
            "categoria": "$_id.categoria",
            "total_vendas": 1,
            "_id": 0
        }
    }
])

// exercicio 14
db.vendas.aggregate([
    {
        "$group": {
            "_id": {
                "marca": "$MARCAS",
                "categoria": "$Categoria"
            },
            "total_produtos_vendidos": {
                "$sum": "$qtd"
            }
        }
    },
    {
        "$project": {
            "marca": "$_id.marca",
            "categoria": "$_id.categoria",
            "total_produtos_vendidos": 1,
            "_id": 0
        }
    }
])

// exercicio 15
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    { $sort: { data_venda: 1 } },
    {
        $project: {
            data_venda: 0
        }
    }
])

// exercicio 16
db.vendas.aggregate([
    { $match: { qtd: { $gte: 5 } } }
])


// exercicio 17
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    {
        $group: {
            _id: { $year: "$data_venda" },
            total_vendas: { $sum: "$valor" }
        }
    },
    { $sort: { _id: 1 } }
])

// exercicio 18
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    {
        $group: {
            _id: { $year: "$data_venda" },
            total_vendas: { $avg: "$valor" }
        }
    },
    { $sort: { _id: 1 } }
])

// exercicio 19
db.vendas.aggregate([
    {
        $match: {
            valor: { $gte: 10, $lte: 30 }
        }
    },
    {
        $project: {
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

// exercicio 20
db.vendas.aggregate([
    { $sort: { valor: -1 } },
    { $limit: 5 },
    {
        $project: {
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

// exercicio 21
db.vendas.aggregate([
    { $sort: { valor: 1 } },
    { $limit: 5 },
    {
        $project: {
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

// exercicio 22
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    {
        $group: {
            _id: { $month: "$data_venda" },
            qtd_total: { $sum: "$qtd" }
        }
    },
    { $sort: { _id: 1 } }
])

// exercicio 23
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    {
        $group: {
            _id: { $month: "$data_venda" },
            total_valor_vendas: { $sum: "$valor" }
        }
    },
    { $sort: { _id: 1 } }
])

// exercicio 24
db.vendas.aggregate([
    {
        $group: {
            _id: "$NOME_CLIENTE",
            total_valor_vendas: { $sum: "$valor" }
        }
    },
    { $sort: { _id: -1 } }
])


// exercicio 25
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    {
        $group: {
            _id: { $month: "$data_venda" },
            total_valor_vendas: { $avg: "$valor" }
        }
    },
    { $sort: { _id: 1 } }
])

// exercicio 26
db.vendas.aggregate([
    { $match: { valor: { $gte: 50 } } },
    {
        $project: {
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

// exercicio 27
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    {
        $group: {
            _id: { $dayOfWeek: "$data_venda" },
            total_valor_vendas: { $sum: "$valor" }
        }
    },
    { $sort: { _id: 1 } }
])

// exercicio 28
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    {
        $group: {
            _id: { $dayOfWeek: "$data_venda" },
            media_valor_vendas: { $avg: "$valor" }
        }
    },
    { $sort: { _id: 1 } }
])

// exercicio 29
db.vendas.aggregate([
    {
        $addFields: {
            data_venda: {
                $dateFromString: {
                    dateString: "$DATA_VENDA",
                    format: "%d/%m/%Y"
                }
            }
        }
    },
    {
        $group: {
            _id: { $dayOfWeek: "$data_venda" },
            qtd_total: { $sum: "$qtd" }
        }
    },
    { $sort: { _id: 1 } }
])

// exercicio 30
db.vendas.aggregate([
    {
        $group: {
            _id: "$MARCAS",
            media_valor_vendas: { $avg: "$valor" }
        }
    }
])



// exercicio 31
db.vendas.aggregate([
    {
        $addFields: {
            mes: { $toInt: { $substr: ["$DATA_VENDA", 3, 2] } }
        }
    },
    {
        $match: { mes: 2 }
    },
    {
        $project: {
            DATA_VENDA: 1,
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

// exercicio 32
db.vendas.aggregate([
    {
        $sort:
            { valor: 1, cod_cliente: 1 }
    },
    {
        $project: {
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

// exercicio 33
db.vendas.aggregate([
    {
        $group: {
            _id: {
                categoria: "$Categoria",
                marca: "$MARCAS"
            },
            total_vendas: { $sum: "$valor" }
        }
    }
])

// exercicio 34
db.vendas.aggregate([
    {
        $addFields: {
            mes: { $toInt: { $substr: ["$DATA_VENDA", 3, 2] } }
        }
    },
    {
        $match: {
            mes: { $gte: 1, $lte: 6 }
        }
    },
    {
        $project: {
            DATA_VENDA: 1,
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

// exercicio 35
db.vendas.aggregate([
    {
        $addFields: {
            mes: { $toInt: { $substr: ["$DATA_VENDA", 3, 2] } }
        }
    },
    {
        $match: {
            mes: { $gte: 1, $lte: 6 }
        }
    },
    {
        $group: {
            _id: null,
            media_valor_vendas: { $avg: "$valor" }
        }
    },
    {
        $project: {
            _id: 0
        }
    }
])

// exercicio 36
db.vendas.aggregate([
    {
        $addFields: {
            mes: { $toInt: { $substr: ["$DATA_VENDA", 3, 2] } }
        }
    },
    {
        $match: {
            mes: { $gte: 1, $lte: 6 }
        }
    },
    {
        $group: {
            _id: null,
            qtd_total_produtos: { $sum: "$qtd" }
        }
    },
    {
        $project: {
            _id: 0
        }
    }
])

// exercicio 37
db.vendas.aggregate([
    {
        $sort:
            { valor: -1, Categoria: 1 }
    },
    {
        $project: {
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1,
            Categoria: 1
        }
    }
])


// exercicio 38
db.vendas.aggregate([
    {
        $match: {
            valor: { $in: [10, 20, 30] }
        }
    },
    {
        $project: {
            DATA_VENDA: 1,
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

// exercicio 39
db.vendas.aggregate([
    {
        $addFields: {
            mes: { $toInt: { $substr: ["$DATA_VENDA", 3, 2] } }
        }
    },
    {
        $match: {
            mes: { $eq: 12 }
        }
    },
    {
        $project: {
            DATA_VENDA: 1,
            cod_cliente: 1,
            cod_produto: 1,
            cod_venda: 1,
            qtd: 1,
            valor: 1
        }
    }
])

[
    {
        COD_CLIENTE: 4363,
        COD_PRODUTO: 228,
        COD_VENDA: 20478,
        Categoria: "Cabo de �udio e V�deo",
        DATA_VENDA: "15/02/2112",
        DESCRICAO: "Cabo VGA para VGA - 20M",
        MARCAS: "ORIGINAL BRAND",
        NOME_CLIENTE: "Leonardo Viana",
        Nome: "Cabo VGA para VGA - 20M",
        QTD: 1,
        VALOR: 0,
        cod_cliente: 4363,
        cod_produto: 228,
        cod_venda: 20478,
        qtd: 1,
        valor: 23
    }
]


db.vendas.aggregate([
    { $match: { "cod_venda": "999999" } },
    {
        $group: {
            _id: "$cod_venda",
            DATA_VENDA: { $first: "$DATA_VENDA" },
            COD_CLIENTE: { $first: "$COD_CLIENTE" },
            NOME_CLIENTE: { $first: "$NOME_CLIENTE" },
            produtos: {
                $push: {
                    cod_produto: "$cod_produto",
                    DESCRICAO: "$DESCRICAO",
                    COD_VENDA: "$COD_VENDA"
                }
            }
        }
    }
])

db.vendas.aggregate([
    { $match: { "cod_venda": { $ne: "20478" } } },
    {
        $group: {
            _id: "$cod_venda",
            DATA_VENDA: { $first: "$DATA_VENDA" },
            COD_CLIENTE: { $first: "$COD_CLIENTE" },
            NOME_CLIENTE: { $first: "$NOME_CLIENTE" },
            produtos: {
                $push: {
                    COD_PRODUTO: "$cod_produto",
                    DESCRICAO: "$DESCRICAO",
                    NOME: "$Nome",
                    COD_CLIENTE: "$cod_cliente",
                    COD_PRODUTO: "$COD_PRODUTO",
                    COD_VENDA: "$COD_VENDA",
                    VALOR: "$valor",
                    QTD: "$qtd"
                }
            }
        }
    },
    {
        $out: "nova_colecao"
    }
])

// 1
db.nova_colecao.aggregate([
    {
        $unwind: "$produtos"
    },
    {
        $group: {
            _id: "$_id",
            totalVendas: { $sum: { $multiply: ["$produtos.VALOR", "$produtos.QTD"] } }
        }
    }
])