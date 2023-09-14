<?php
/*
Descrubra se $numero é :
 - Divisível por 10
 - Divisível por 3
 - Se não é divisível por nenhum destes 

Imprimir mensagem na tela do número e as condições acima.
*/
$numero = 14;

    if($numero % 10 == 0 && $numero % 3 == 0 ){
        echo 'Número ' . $numero . ' é divisível por 10 e por 3' . '<br>';
    }else if($numero % 10 == 0){
        echo 'Número ' . $numero . ' é divisível por 10' . '<br>';
    }else if($numero % 3 == 0){
        echo 'Número ' . $numero . ' é divisível por 3' . '<br>';
    }else{
        echo 'Número ' . $numero . ' não é divisível nem por 10 e nem por 3' . '<br>';
    }


?>