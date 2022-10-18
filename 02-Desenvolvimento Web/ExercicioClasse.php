<?php

class SalaVirtual
{ 
	private $professor; 
	private $diaDaSemana; 
	private $disciplina; 

    //set e get professor
    public function setProfessor($professor) 
	{ 
	    if (is_string($professor)) { 
	        $this->professor = $professor; 
	    } 
	} 
	 
    public function getProfessor() 
	{ 
	    return $this->professor; 
	}

    //set e get diaDaSemana
    public function setDiaDaSemana($diaDaSemana) 
	{ 
	    if (is_string($diaDaSemana)) { 
	        $this->diaDaSemana = $diaDaSemana; 
	    } 
	} 
	 
    public function getDiaDaSemana() 
	{ 
	    return $this->diaDaSemana; 
	}

    //set e get disciplina
    public function setDisciplina($disciplina)
    {
        if (is_string($disciplina)) { 
	        $this->disciplina = $disciplina; 
	    } 
    }

    public function getDisciplina()
    {
        return $this->disciplina;
    }
}

$s1 = new SalaVirtual;
$s2 = new SalaVirtual;

$s1->setProfessor("Orlando"); 
$s1->setDiaDaSemana("Terça");
$s1->setDisciplina("Web2");

$s2->setProfessor("Rodrigo"); 
$s2->setDiaDaSemana("Sexta");
$s2->setDisciplina("Técnica de Programação");

print 'Professor: '. $s1->getProfessor() . '<br>'.PHP_EOL; 
print 'Dia da Semana: ' .$s1->getDiaDaSemana()   . '<br>'.PHP_EOL;
print 'Disciplina: '. $s1->getDisciplina() . '<br>'.PHP_EOL;

echo'<br>'.PHP_EOL;

print 'Professor: '. $s2->getProfessor() . '<br>'.PHP_EOL; 
print 'Dia da Semana: ' .$s2->getDiaDaSemana()   . '<br>'.PHP_EOL;
print 'Disciplina: '. $s2->getDisciplina() . '<br>'.PHP_EOL;