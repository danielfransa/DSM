<?php
require 'conexao.php';
class Buscar
{
    public function Login($user, $senha)
    {
        

        $sql = "SELECT * FROM usuario WHERE user = :user AND senha = :senha";
        $sql = $conn->prepare($sql);
        $sql->bindValue("user", $user);
        $sql->bindValue("senha", ($senha));
        $sql->execute();

        if($sql->rowCount() > 0){
            $dado = $sql->fetch();

            $_SESSION['idUser'] = $dado['id'];

            return true;
        }else{
            return false;            
        }
    }
}