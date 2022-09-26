<?php
/*
Faça o cálculo da média simples de 
$nota_1 e $nota_2.
Imprima a média simples.
Imprima a condição:
    Se a média menor ou igual a 4.9, reprovado.
    Se a média entre 5 e 7, recuperação.
    Se a média acima de 7, aprovado.
*/
$nota_1 = 4;
$nota_2 = 9;
$media;

    $media = ($nota_1 + $nota_2)/2;
    
    echo 'Média = ' . $media . '<br>';

    if($media <= 4.9){
         echo 'Reprovado' . '<br>';
    }else if($media >=5 && $media <=7){
        echo 'Recuperação' . '<br>';
    }else{
        echo 'Aprovado' . '<br>';
    }
?>