<?php
$servername = "127.0.0.1";
$username = "root";
$password = "";
$dbname="web2";

//session_start();

// Criar Conexão
 
class Conexao{
    
        try{
            $conn = new PDO("mysql:dbname=".$dbname."; host=".$servername, $username, $password);
            $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        }catch(PDOException $e){
            echo "ERRO: " .$e->getMessage();
            exit;
        }

    
}
    


?>