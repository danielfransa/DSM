<?php
/*
Faça o cálculo da média simples de 
$nota_1 e $nota_2.
Imprima a média simples.
Imprima a condição:
    Se a média menor ou igual a 4.9, reprovado.
    Se a média entre 5 e 7, recuperação.
    Se a média acima de 7, aprovado.

Crie uma função com o nome calculo_media.
Crie validações na função, para que os parâmetros aceitos estejam 
entre 0 e 10.
Crie constantes para os limites ( 0 e 10 )
*/

function calculo_media($nota_1, $nota_2){
    if ($nota_1 >10 || $nota_1 < 0 ){
        if ($nota_2 > 10 || $nota_2 < 0){
            echo 'Nota 1 e 2 esta incorreta!!!';
        } else{
            echo 'Nota 1 esta incorreta!!!'; 
        }
    }else if ($nota_2 > 10 || $nota_2 < 0){
        echo 'Nota 2 esta incorreta!!!';
    }else {
        
        $media = ($nota_1 + $nota_2)/2;
    
        echo 'Média = ' . $media . '<br>';
    
        if($media <= 4.9){
            echo 'Reprovado' . '<br>';
        }else if($media >=5 && $media <=7){
            echo 'Recuperação' . '<br>';
        }else{
            echo 'Aprovado' . '<br>';
        }

    }
}

$nota_1 = 9;
$nota_2 = 4;
calculo_media($nota_1, $nota_2);




?>