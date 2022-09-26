/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exercicio1;
import java.util.Scanner;

/**
 *
 * @author danie
 */
public class Exercicio1 {

    public static void main(String[] args) {
        int aux;
        double n1, n2, n3;
        Scanner sc = new Scanner(System.in);
         
        
        do{
            System.out.println("----- Menu-----");
            System.out.println("1 - SOMA:");
            System.out.println("2 - SUBTRACAO: ");
            System.out.println("3 - MUTIPLICACAO: ");
            System.out.println("4 - DIVISAO: ");
            System.out.println("0 - SAIR DO PROGRAMA:");
            aux = sc.nextInt();
            
            switch(aux){
                case 1:
                    System.out.println("Digite o Primeiro Valor: ");
                    n1 = sc.nextDouble();
                    System.out.println("Digite o Segundo Valor: ");
                    n2 = sc.nextDouble();
                    System.out.println("Resultado da Soma: "+Calculadora.soma(n1, n2));
                    break;
                
                case 2:
                    System.out.println("Digite o Primeiro Valor: ");
                    n1 = sc.nextDouble();
                    System.out.println("Digite o Segundo Valor: ");
                    n2 = sc.nextDouble();
                    System.out.println("Digite o Terceiro Valor: ");
                    n3 = sc.nextDouble();
                    System.out.println("Resultado da Subtração: "+Calculadora.subtracao(n1, n2, n3));
                    break;

                case 3:
                    System.out.println("Digite o Primeiro Valor: ");
                    n1 = sc.nextDouble();
                    System.out.println("Digite o Segundo Valor: ");
                    n2 = sc.nextDouble();
                    System.out.println("Resultado da Mutiplicação: "+Calculadora.multiplicacao(n1, n2));
                    break;                    
                
                case 4:
                    System.out.println("Digite o Primeiro Valor: ");
                    n1 = sc.nextDouble();
                    System.out.println("Digite o Segundo Valor: ");
                    n2 = sc.nextDouble();
                    System.out.println("Resultado da Divisão: = "+Calculadora.divisão(n1, n2));
                    break;
                    
                case 0:
                    System.out.println("Obrigado por utilizar nosso sistema!");
                    System.out.println("Ate logo!");
                    break;
                
                default:
                    System.out.println("Opcao invalida!!! ");               
            }
        }while(aux != 0);
    }
}
