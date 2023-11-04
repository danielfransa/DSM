<?php

    require_once('./conexao.php');

    session_start();

    $id;

    if(!empty($_GET)){
        $id = $_GET["id"];
    }

    if(!empty($id)){
        //Solicita usuário de um ID especifico
        $sql = "SELECT * FROM cadastro WHERE id = :id";
        $result = $conn->query($sql);
    }else{
        //Solicitar todos os usuários cadastrados:
        $sql = "SELECT * FROM cadastro";
        $result = $conn->query($sql);   
    }

    

    




