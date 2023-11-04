-- --------------------------------------------------------
-- Servidor:                     127.0.0.1
-- Versão do servidor:           10.4.13-MariaDB - mariadb.org binary distribution
-- OS do Servidor:               Win64
-- HeidiSQL Versão:              11.3.0.6295
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Copiando estrutura do banco de dados para avalicacao
CREATE DATABASE IF NOT EXISTS `avalicacao` /*!40100 DEFAULT CHARACTER SET utf8mb4 */;
USE `avalicacao`;

-- Copiando estrutura para tabela avalicacao.atendimento
CREATE TABLE IF NOT EXISTS `atendimento` (
  `crm` char(50) DEFAULT NULL,
  `numero` int(11) DEFAULT NULL,
  KEY `FRK_CRM` (`crm`),
  KEY `FRK_NUMERO` (`numero`),
  CONSTRAINT `FRK_CRM` FOREIGN KEY (`crm`) REFERENCES `medico` (`crm`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `FRK_NUMERO` FOREIGN KEY (`numero`) REFERENCES `paciente` (`numero`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Copiando dados para a tabela avalicacao.atendimento: ~11 rows (aproximadamente)
/*!40000 ALTER TABLE `atendimento` DISABLE KEYS */;
INSERT INTO `atendimento` (`crm`, `numero`) VALUES
	('10790', 1),
	('10790', 2),
	('10790', 5),
	('10567', 3),
	('10567', 4),
	('10240', 1),
	('00950', 5),
	('00950', 2),
	('30518', 3),
	('30518', 4),
	('30518', 2);
/*!40000 ALTER TABLE `atendimento` ENABLE KEYS */;

-- Copiando estrutura para tabela avalicacao.exame
CREATE TABLE IF NOT EXISTS `exame` (
  `codigo` int(11) NOT NULL,
  `tipo` varchar(50) DEFAULT NULL,
  `valor` decimal(10,2) DEFAULT NULL,
  `numeroPaciente` int(11) DEFAULT NULL,
  PRIMARY KEY (`codigo`),
  KEY `FRK_NumPaciente` (`numeroPaciente`),
  CONSTRAINT `FRK_NumPaciente` FOREIGN KEY (`numeroPaciente`) REFERENCES `paciente` (`numero`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Copiando dados para a tabela avalicacao.exame: ~11 rows (aproximadamente)
/*!40000 ALTER TABLE `exame` DISABLE KEYS */;
INSERT INTO `exame` (`codigo`, `tipo`, `valor`, `numeroPaciente`) VALUES
	(1, 'GLICEMIA', 100.00, 1),
	(2, 'HEMOGRAMA', 100.00, 1),
	(3, 'HEMOGRAMA', 100.00, 2),
	(4, 'ULTRASSOM', 350.00, 2),
	(5, 'URINA I', 50.00, 3),
	(6, 'CARDIOGRAMA', 350.00, 3),
	(7, 'ESTEIRA', 250.00, 4),
	(8, 'RAIO X', 150.00, 2),
	(9, 'AMEBA', 80.00, 5),
	(10, 'TOMOGRAFIA', 650.00, 5),
	(11, 'PSA', 100.00, 1);
/*!40000 ALTER TABLE `exame` ENABLE KEYS */;

-- Copiando estrutura para tabela avalicacao.medico
CREATE TABLE IF NOT EXISTS `medico` (
  `crm` char(10) NOT NULL,
  `nome` varchar(70) DEFAULT NULL,
  `especialidade` varchar(90) DEFAULT NULL,
  PRIMARY KEY (`crm`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Copiando dados para a tabela avalicacao.medico: ~5 rows (aproximadamente)
/*!40000 ALTER TABLE `medico` DISABLE KEYS */;
INSERT INTO `medico` (`crm`, `nome`, `especialidade`) VALUES
	('00950', 'MELISSA DE PAULA', 'PEDIATRA'),
	('10240', 'ANESIO TREVOBOM', 'UROLOGISTA'),
	('10567', 'PABLO PULSO FORTE', 'CARDIOLOGISTA'),
	('10790', 'ADALBERTO DE SOUZA', 'CLINICO GERAL'),
	('30518', 'MARCIO OSSO TRINCADO', 'ORTOPEDISTA');
/*!40000 ALTER TABLE `medico` ENABLE KEYS */;

-- Copiando estrutura para tabela avalicacao.paciente
CREATE TABLE IF NOT EXISTS `paciente` (
  `numero` int(11) NOT NULL,
  `nome` varchar(70) DEFAULT NULL,
  `endereco` varchar(100) DEFAULT NULL,
  PRIMARY KEY (`numero`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Copiando dados para a tabela avalicacao.paciente: ~5 rows (aproximadamente)
/*!40000 ALTER TABLE `paciente` DISABLE KEYS */;
INSERT INTO `paciente` (`numero`, `nome`, `endereco`) VALUES
	(1, 'CHICO DEDO RACHADO', 'RUA DAS PEDRAS, 35'),
	(2, 'NARCISIO DA COSTA', 'RUA DAS AMOREIRAS, 1240'),
	(3, 'JOAO APARECIDO MARTINS', 'AV CENTRAL, 12'),
	(4, 'ELISABETH DE SOUZA', 'PRACA DAS NASCENTES, 70'),
	(5, 'ISADORA OLIVEIRA', 'RUA 15 DE SETEMBRO, 1890');
/*!40000 ALTER TABLE `paciente` ENABLE KEYS */;

-- Copiando estrutura para função avalicacao.Valor_Gasto_Exames
DELIMITER //
CREATE FUNCTION `Valor_Gasto_Exames`(numero int) RETURNS decimal(10,0)
BEGIN

	RETURN (SELECT SUM(valor)
				FROM exame e
				INNER JOIN paciente p
				ON e.numeroPaciente = p.numero
				WHERE p.numero = numero);
				
END//
DELIMITER ;

-- Copiando estrutura para view avalicacao.vw_atendimentos
-- Criando tabela temporária para evitar erros de dependência de VIEW
CREATE TABLE `vw_atendimentos` (
	`NomeMedico` VARCHAR(70) NULL COLLATE 'utf8mb4_general_ci',
	`Especialidade` VARCHAR(90) NULL COLLATE 'utf8mb4_general_ci',
	`NomePaciente` VARCHAR(70) NULL COLLATE 'utf8mb4_general_ci'
) ENGINE=MyISAM;

-- Copiando estrutura para view avalicacao.vw_atendimentos
-- Removendo tabela temporária e criando a estrutura VIEW final
DROP TABLE IF EXISTS `vw_atendimentos`;
CREATE ALGORITHM=UNDEFINED SQL SECURITY DEFINER VIEW `vw_atendimentos` AS SELECT m.nome AS NomeMedico, m.especialidade AS Especialidade, p.nome AS NomePaciente
FROM atendimento a
INNER JOIN medico m
ON a.crm = m.crm
INNER JOIN paciente p
ON a.numero = p.numero ;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
