<?php
require_once('./conexao.php');

    $user = ($_POST['username']);
    $senha = ($_POST['senha']);

    $sql = "SELECT user, senha  FROM usuario";
    $result = $conn->query($sql);
    
    if($_SERVER["REQUEST_METHOD"] == "POST"){
        session_start();
        while($row = $result->fetch_assoc()){
            if($user==$row["user"] and $senha==$row["senha"] ){
                $_SESSION['loggedin'] = TRUE;
                $_SESSION["username"] = 'FATEC';
                 header("location: welcome.php");
            } else {
                echo "Erro Senha!";
                $_SESSION['loggedin'] = FALSE;
            }

        }
    }