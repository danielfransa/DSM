<?php
/*
Escreva um script que imprima qual o maior número.
Use IF .. ELSE
*/
$a = 10;
$b = 1;
$c = 40;

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