<?php

require_once 'Pessoa.php';
require_once 'SalaVirtual.php';

//criando objeto sala virtual
$s1 = new SalaVirtual("Orlando", "Terça-Feira", "Web-2");


$s1->addAluno("Daniel", "37", "1231545");
$s1->addAluno("Maia", "17", "5456");
$s1->addAluno("João", "24", "171654");
$s1->addAluno("Gustavo", "57", "5456485");
$s1->addAluno("Joana", "17", "5648785");

print "Sala 1". '<br>'.PHP_EOL; 
print 'Professor: '. $s1->getProfessor() . '<br>'.PHP_EOL; 
print 'Dia da Semana: ' .$s1->getDiaDaSemana()   . '<br>'.PHP_EOL;
print 'Disciplina: '. $s1->getDisciplina() . '<br>'.PHP_EOL;
print '<br>'.PHP_EOL; 
foreach ($s1->getAlunos() as $c)
{
    print '  Aluno: ' . $c->getNome() . ' -  Idade: ' . $c->getIdade() . ' -  RA: ' . $c->getCodigo() . "<br>\n";
} 
print '<br>'.PHP_EOL; 
print '<br>'.PHP_EOL; 

$s2 = new SalaVirtual("Jonas Bode", "Segunda-Feira", "Engenharia de Software");

$s2->addAluno("Daniel", "37", "1231545");
$s2->addAluno("João", "17", "15156");
$s2->addAluno("Maria", "27", "654614654");
$s2->addAluno("Gabriela", "25", "156415674");
$s2->addAluno("Danilo", "18", "214564");
$s2->addAluno("Juciel", "19", "126514684");

print "Sala 2". '<br>'.PHP_EOL; 
print 'Professor: '. $s2->getProfessor() . '<br>'.PHP_EOL; 
print 'Dia da Semana: ' . $s2->getDiaDaSemana()   . '<br>'.PHP_EOL;
print 'Disciplina: '. $s2->getDisciplina() . '<br>'.PHP_EOL;
print '<br>'.PHP_EOL; 
foreach ($s2->getAlunos() as $c)
{
    print '  Aluno: ' . $c->getNome() . ' -  Idade: ' . $c->getIdade() . ' -  RA: ' . $c->getCodigo() . "<br>\n";
} 
print '<br>'.PHP_EOL; 
print '<br>'.PHP_EOL; 

$s3 = new SalaVirtual("Rodrigo", "Sexta-Feira", "Técnicas de Programação");


$s3->addAluno("João", "17", "15156");
$s3->addAluno("Maria", "27", "654614654");
$s3->addAluno("Gabriela", "25", "156415674");
$s3->addAluno("João", "24", "171654");
$s3->addAluno("Gustavo", "57", "5456485");
$s3->addAluno("Joana", "17", "5648785");

print "Sala 3". '<br>'.PHP_EOL; 
print 'Professor: '. $s3->getProfessor() . '<br>'.PHP_EOL; 
print 'Dia da Semana: ' . $s3->getDiaDaSemana()   . '<br>'.PHP_EOL;
print 'Disciplina: '. $s3->getDisciplina() . '<br>'.PHP_EOL;
print '<br>'.PHP_EOL; 
foreach ($s3->getAlunos() as $c)
{
    print '  Aluno: ' . $c->getNome() . ' -  Idade: ' . $c->getIdade() . ' -  RA: ' . $c->getCodigo() . "<br>\n";
} 
print '<br>'.PHP_EOL; 
print '<br>'.PHP_EOL; 

$s4 = new SalaVirtual("Nilton", "Quinta-Feira", "Banco de Dados");

$s4->addAluno("João", "24", "171654");
$s4->addAluno("Gustavo", "57", "5456485");
$s4->addAluno("Joana", "10", "51651561");
$s4->addAluno("Maria", "34", "21211515");
$s4->addAluno("Danilo", "27", "2156452");
$s4->addAluno("Bruno", "47", "151517885");
$s4->addAluno("Daniel", "25", "51651645");

print "Sala 4". '<br>'.PHP_EOL; 
print 'Professor: '. $s4->getProfessor() . '<br>'.PHP_EOL; 
print 'Dia da Semana: ' . $s4->getDiaDaSemana()   . '<br>'.PHP_EOL;
print 'Disciplina: '. $s4->getDisciplina() . '<br>'.PHP_EOL;
print '<br>'.PHP_EOL; 
foreach ($s4->getAlunos() as $c)
{
    print '  Aluno: ' . $c->getNome() . ' -  Idade: ' . $c->getIdade() . ' -  RA: ' . $c->getCodigo() . "<br>\n";
} 
print '<br>'.PHP_EOL; 
print '<br>'.PHP_EOL;

$s5 = new SalaVirtual("Sama", "Sábado", "Estrutur de Dados");

$s5->addAluno("Maria", "34", "21211515");
$s5->addAluno("Danilo", "27", "2156452");
$s5->addAluno("Bruno", "47", "151517885");
$s5->addAluno("Daniel", "25", "51651645");
$s5->addAluno("Junior", "28", "156489");
$s5->addAluno("Marcel", "27", "213214545");
$s5->addAluno("Janaina", "26", "213156645");
$s5->addAluno("Pamela", "22", "126156486");
$s5->addAluno("Durval", "21", "1165156465");

print "Sala 5". '<br>'.PHP_EOL; 
print 'Professor: '. $s5->getProfessor() . '<br>'.PHP_EOL; 
print 'Dia da Semana: ' . $s5->getDiaDaSemana()   . '<br>'.PHP_EOL;
print 'Disciplina: '. $s5->getDisciplina() . '<br>'.PHP_EOL;
print '<br>'.PHP_EOL; 
foreach ($s5->getAlunos() as $c)
{
    print '  Aluno: ' . $c->getNome() . ' -  Idade: ' . $c->getIdade() . ' -  RA: ' . $c->getCodigo() . "<br>\n";
} 
print '<br>'.PHP_EOL; 
print '<br>'.PHP_EOL;
