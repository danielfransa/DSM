<?php
/*
Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o número seja 
Se estiver fora do intervalo, informar que não existe o mês

Utilize array.
*/

$num = 5;

    switch($num){
        case 1:
            echo 'Janeiro';
            break;
        case 2:
            echo 'Fevereiro';
            break;
        case 3:
            echo 'Março';
            break;
        case 4:
            echo 'Abril';
            break;
        case 5:
            echo 'Maio';
            break;
        case 6:
            echo 'Junho';
            break;
        case 7:
            echo 'Julho';
            break;
        case 8:
            echo 'Agosto';
            break;
        case 9:
            echo 'Setembro';
            break;
        case 10:
            echo 'Outubro';
            break;
        case 11:
            echo 'Novembro';
            break;
        case 12:
            echo 'Dezembro';
            break;
        default:
            echo 'Data inválida!';
        
    }

?>