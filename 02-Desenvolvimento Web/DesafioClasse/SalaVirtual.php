<?php

class SalaVirtual
{ 
	private $professor; 
	private $diaDaSemana; 
	private $disciplina;

	public function __construct($professor, $diaDaSemana, $disciplina) 
	{ 
            $this->pessoa = [];
            $this->professor = $professor; 
            $this->diaDaSemana = $diaDaSemana; 
            $this->disciplina = $disciplina;  
	}

	public function addAluno( $nome, $idade, $codigo ) 
	{ 
	    $this->pessoa[] = new Pessoa($nome, $idade, $codigo); 
	} 

	public function getAlunos() 
	{ 
	    return $this->pessoa; 
	}

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
