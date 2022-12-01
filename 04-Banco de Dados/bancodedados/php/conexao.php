<?php
    //conectando com o MySql (localhost)

    $conexao=mysqli_connect('localhost', 'root', '');
    mysqli_set_charset($conexao, 'utf8');

    if(!$conexao){
        die("Erro de conexão com o banco de dados, o seguinte erro cocorreu -->".mysqli_error($conexao));
    }

    $banco = mysqli_select_db($conexao, 'empresa2');
    if(!$conexao){
        die("Erro de conexão com o banco de dados, o seguinte erro cocorreu -->".mysqli_error($conexao));
    }

?>