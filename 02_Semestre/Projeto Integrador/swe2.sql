-- --------------------------------------------------------
-- Servidor:                     127.0.0.1
-- Versão do servidor:           10.4.24-MariaDB - mariadb.org binary distribution
-- OS do Servidor:               Win64
-- HeidiSQL Versão:              12.0.0.6468
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Copiando estrutura do banco de dados para swe
CREATE DATABASE IF NOT EXISTS `swe` /*!40100 DEFAULT CHARACTER SET utf8mb4 */;
USE `swe`;

-- Copiando estrutura para tabela swe.postagem
CREATE TABLE IF NOT EXISTS `postagem` (
  `idpostagem` int(11) NOT NULL AUTO_INCREMENT,
  `tema` varchar(50) NOT NULL,
  `url` varchar(80) DEFAULT NULL,
  `conteudo` mediumtext DEFAULT NULL,
  `postdate` datetime DEFAULT NULL,
  `id_tipo` int(11) DEFAULT NULL,
  `id_usuario` int(11) DEFAULT NULL,
  PRIMARY KEY (`idpostagem`),
  KEY `FK_Id_Usuario` (`id_usuario`),
  KEY `FK_Id_Tipo` (`id_tipo`),
  CONSTRAINT `FK_Id_Tipo` FOREIGN KEY (`id_tipo`) REFERENCES `tipo` (`idtipo`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `FK_Id_Usuario` FOREIGN KEY (`id_usuario`) REFERENCES `usuario` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Copiando dados para a tabela swe.postagem: ~0 rows (aproximadamente)

-- Copiando estrutura para tabela swe.tipo
CREATE TABLE IF NOT EXISTS `tipo` (
  `idtipo` int(11) NOT NULL AUTO_INCREMENT,
  `tipo` varchar(20) NOT NULL,
  PRIMARY KEY (`idtipo`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8mb4;

-- Copiando dados para a tabela swe.tipo: ~5 rows (aproximadamente)
INSERT INTO `tipo` (`idtipo`, `tipo`) VALUES
	(1, 'Vídeo'),
	(2, 'Curso on Line'),
	(3, 'Livro'),
	(4, 'Artigo'),
	(5, 'Site');

-- Copiando estrutura para tabela swe.usuario
CREATE TABLE IF NOT EXISTS `usuario` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(80) NOT NULL,
  `email` varchar(50) DEFAULT NULL,
  `senha` varchar(40) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Copiando dados para a tabela swe.usuario: ~0 rows (aproximadamente)

/*!40103 SET TIME_ZONE=IFNULL(@OLD_TIME_ZONE, 'system') */;
/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
