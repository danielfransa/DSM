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
*/
$nota_1 = 9;
$nota_2 = 7;
$media;

   function calculo_media($nota_1, $nota_2){
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

calculo_media($nota_1, $nota_2)

?>