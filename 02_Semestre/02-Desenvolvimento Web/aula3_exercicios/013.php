<?php
/*
Crie uma função que demonstre 
 - Passagem por valor.
 - Passagem por referência.

 
*/
$a=10;
$b=10;

    function passagem($a, &$b){
        $a = 'valor';
        $b = 'Referência';
    }

echo 'Valor de "a" antes de chamar a função => ' . $a . '<br>';
echo 'Valor de "b" antes de chamar a função => ' . $b . '<br>';

passagem($a, $b);

echo '<br><br>';

echo 'Valor de "a" depois de chamar a função => ' . $a . '<br>';
echo 'Valor de "b" depois de chamar a função => ' . $b . '<br>';




?>