-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Tempo de geração: 13-Maio-2022 às 03:14
-- Versão do servidor: 10.4.13-MariaDB
-- versão do PHP: 7.4.8

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `danielfranca`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `cliente`
--

CREATE TABLE `cliente` (
  `id_client` int(11) NOT NULL,
  `nome` varchar(30) DEFAULT NULL,
  `cpf` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Estrutura da tabela `corrida`
--

CREATE TABLE `corrida` (
  `id_corrida` int(11) NOT NULL,
  `id_client` int(11) DEFAULT NULL,
  `placa` varchar(10) DEFAULT NULL,
  `data_pedido` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Estrutura da tabela `taxi`
--

CREATE TABLE `taxi` (
  `placa` varchar(10) NOT NULL,
  `marca` varchar(30) DEFAULT NULL,
  `modelo` varchar(30) DEFAULT NULL,
  `ano_fab` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `cliente`
--
ALTER TABLE `cliente`
  ADD PRIMARY KEY (`id_client`),
  ADD UNIQUE KEY `cpf` (`cpf`);

--
-- Índices para tabela `corrida`
--
ALTER TABLE `corrida`
  ADD PRIMARY KEY (`id_corrida`),
  ADD KEY `id_client` (`id_client`),
  ADD KEY `placa` (`placa`);

--
-- Índices para tabela `taxi`
--
ALTER TABLE `taxi`
  ADD PRIMARY KEY (`placa`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `corrida`
--
ALTER TABLE `corrida`
  MODIFY `id_corrida` int(11) NOT NULL AUTO_INCREMENT;

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `corrida`
--
ALTER TABLE `corrida`
  ADD CONSTRAINT `corrida_ibfk_1` FOREIGN KEY (`id_client`) REFERENCES `cliente` (`id_client`),
  ADD CONSTRAINT `corrida_ibfk_2` FOREIGN KEY (`placa`) REFERENCES `taxi` (`placa`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
