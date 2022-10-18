<?php

class Pessoa
{
    private $nome; 
	private $idade; 
	private $codigo;

    public function __construct( $nome, $idade, $codigo ) 
	{ 
	    $this->nome   = $nome; 
	    $this->idade  = $idade;
        $this->codigo  = $codigo; 
	} 

    public function getNome() 
	{ 
	    return $this->nome; 
	}

    public function getIdade() 
	{ 
	    return $this->idade; 
	}

    public function getCodigo() 
	{ 
	    return $this->codigo; 
	}
    

}