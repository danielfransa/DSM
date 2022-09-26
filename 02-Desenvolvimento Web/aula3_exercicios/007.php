<?php
/*
Crie um script que percorra toda a $array, apresentando os valores.
Utilize foreach.
Adapte o código para exibir somente os valores inteiros.
Realize a soma dos números inteiros

Dica: https://www.php.net/manual/en/control-structures.foreach.php
*/ 
$array = [
    "n1" => '30',
    "n2" => 50,
    "n3" => 70,
    "n4" => 30,
];
$soma = 0;

    foreach($array as & $values){
        if(is_integer($values)){
            echo $values . '<br>';
            $soma += $values;
        }
    }
    echo 'Soma dos valores = ' . $soma . '<br>'
        

            
?>