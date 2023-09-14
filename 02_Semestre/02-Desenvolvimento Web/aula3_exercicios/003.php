<?php
/*
Escreva um script que imprima qual o maior número.
Converter variáveis strings em inteiros
Use IF
*/
$a = "40";
$b = "21";

    function verificaMaior(int $a, int $b){
        if($a>$b){
           echo 'O maior numero é: ' . gettype($a) . ' ' . $a . '<br>';
        } else{
           echo 'O maior numero é: ' . gettype($a) . ' ' . $b . '<br>';
        }

    }

    verificaMaior($a, $b)

?>