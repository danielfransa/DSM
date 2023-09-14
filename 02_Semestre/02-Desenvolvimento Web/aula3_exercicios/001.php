<?php
/*
Variáveis 
*/

$variavel_1 = 'Texto';
// Imprimir o valor a variável e o seu tipo
echo "Valor da Variavel: " . $variavel_1 . '<br>';
echo "Tipo da variavel: " . gettype($variavel_1). '<br>';


$variavel_2 = 123;
// Imprimir o valor a variável e o seu tipo
echo "Valor da Variavel: " . $variavel_2. '<br>';
echo "Tipo da variavel: " . gettype($variavel_2). '<br>';

$variavel_3 = 1;
// Imprimir o valor a variável e o seu tipo

$array = [
    "foo" => "bar",
    "bar" => "foo",
];
// Imprimir o valor a variável e o seu tipo
echo "Valor da Variavel: " . var_dump($array) . '<br>';
echo "Tipo da variavel: " . gettype($array). '<br>';

?>