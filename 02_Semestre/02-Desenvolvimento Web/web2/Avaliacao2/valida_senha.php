<?php
    if (isset($_POST['username']) && !empty($_POST['username']) && isset($_POST['senha']) && !empty($_POST['senha'])) {
        
        require 'conexao.php';
        require 'busca_user.php';

        $valida = new Buscar();
        
        $user = addslashes($_POST['username']);
        $senha = addslashes($_POST['senha']);

        

        if($valida->login($user, $senha) == true){
           header("Location: welcome.php");
        }else{
        header("Location: welcome.php");
           
        }

    }else{
        echo "Acesso NEGADO!";
        header("Location: index.php");
    }