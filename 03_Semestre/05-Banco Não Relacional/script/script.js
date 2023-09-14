const fs = require('fs');

// Definir as categorias, marcas e descrições
const categories = ['Eletrônicos', 'Roupas', 'Alimentos', 'Livros', 'Brinquedos'];
const brands = ['Apple', 'Samsung', 'LG', 'Adidas', 'Nike', 'Puma', 'Nestle', 'Coca-Cola'];
const descriptions = ['Muito bom', 'Excelente produto', 'Qualidade superior', 'Perfeito para uso diário', 'Durável e resistente'];

// Função para gerar um nome aleatório
function randomName() {
  const firstNames = ['João', 'Maria', 'Pedro', 'Ana', 'Luís', 'Carla', 'Gustavo', 'Mariana'];
  const lastNames = ['Silva', 'Santos', 'Pereira', 'Ferreira', 'Oliveira', 'Souza', 'Almeida'];
  const firstName = firstNames[Math.floor(Math.random() * firstNames.length)];
  const lastName = lastNames[Math.floor(Math.random() * lastNames.length)];
  return `${firstName} ${lastName}`;
}

// Função para gerar uma data aleatória
function randomDate() {
  const start = new Date(2020, 0, 1);
  const end = new Date();
  const date = new Date(start.getTime() + Math.random() * (end.getTime() - start.getTime()));
  return `${date.getFullYear()}-${(date.getMonth() + 1).toString().padStart(2, '0')}-${date.getDate().toString().padStart(2, '0')}`;
}

// Função para gerar uma linha do CSV
function generateRow() {
  const codVenda = Math.floor(Math.random() * 1000000);
  const dataVenda = randomDate();
  const codClient = Math.floor(Math.random() * 10000);
  const nomeCliente = randomName();
  const codProduto = Math.floor(Math.random() * 100000);
  const descricao = descriptions[Math.floor(Math.random() * descriptions.length)];
  const nome = `${brands[Math.floor(Math.random() * brands.length)]} ${descriptions[Math.floor(Math.random() * descriptions.length)]}`;
  const categoria = categories[Math.floor(Math.random() * categories.length)];
  const marca = brands[Math.floor(Math.random() * brands.length)];
  const valor = (Math.floor(Math.random() * 1000) / 100).toFixed(2);
  const qtd = Math.floor(Math.random() * 10) + 1;
  return `${codVenda},${dataVenda},${codClient},${nomeCliente},${codProduto},${descricao},${nome},${categoria},${marca},${valor},${qtd}\n`;
}

// Gerar o arquivo CSV
const filename = 'dados.csv';
const file = fs.createWriteStream(filename);
file.write('cod_venda,data_venda,cod_client,nome_cliente,cod_produto,descricao,nome,categoria,marcas,valor,qtd\n');
for (let i = 1; i <= 1000000; i++) {
  const row = generateRow();
  file.write(row);
  console.log(`Gerada linha ${i}`);
}
console.log(`Arquivo ${filename} gerado com sucesso!`);
file.end();
