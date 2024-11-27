CREATE TABLE(
ID_Clientes PRIMARY KEY;
nome varchar (10);
cpf varchar (11);
datanascimento varchar (11);
estad varchar (6);
cidade varchar (13);
rua varchar (15);
numero varchar (10);
cep varchar (6);
)

CREATE TABLE(
ID_Pedido PRIMARY KEY;
datacriçao;
status;
Cliente;
)

CREATE TABLE(
ID_Itempedido PRIMARY KEY;
quantidade_compra;
valortotal;
Pedido;
Produto;
)
CREATE TABLE(
ID_Produto PRIMARY KEY;
nome varchar (10);
deacriçao varchar (10);
preçounitario varchar (5);
quantidadeEstoque;
)

CREATE TABLE(
ID_Fornecedor PRIMARY KEY
nome varchar (10);
cnpj (14);
telefone varchar (9);
rua varchar (10);
numero varchar (9);
estado varchar (6);
cep;
cidade varchar (13);
)

INSERT VALUES  clientes