<?php
/*
Escreva um script que imprima qual o maior número.
Use IF
*/
$a = 102;
$b = 1000;
$c = 4000;


    if($a > $b){
        if($a > $c){
            echo 'O maior número é: '. $a. '<br>';
        } else {
            echo 'O maior número é: '. $c. '<br>';
        }
    } else if($b > $a){
        if($b > $c){
            echo 'O maior número é: '. $b. '<br>';
        } else {
            echo 'O maior número é: '. $c. '<br>';
        }
    } else if($c > $a){
        if($c > $b){
            echo 'O maior número é: '. $c. '<br>';
        }
    }

?>