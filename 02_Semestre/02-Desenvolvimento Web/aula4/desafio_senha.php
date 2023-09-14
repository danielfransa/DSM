<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Adivinhando a senha</title>
</head>
<body>
<?php

if(($_POST['senha'])== '123mudar'){
    echo 'Você acertou a senha!!!';
} else {
    echo 'Você errou!!!!';

    $filename = "tetativa_senha.txt";

    if(!file_exists($filename)){
         $handle = fopen($filename, "w");
    } else {
         $handle = fopen($filename, "a");
        }
    
    fwrite($handle, ($_POST['senha'])."\n" );
    fflush($handle);
    fclose($handle);

    // $handle = fopen($filename, "r");
    // while (!feof($handle)) {
    //     $line = fgets($handle);
    //     echo $line ."<br>";
    // }
    // fclose($handle);

}





?>
</body>
</html>