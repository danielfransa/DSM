/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package aula16.pkg09.pkg2022;

import java.util.Scanner;

/**
 *
 * @author aluno.si
 */
public class Aula16092022 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
               
        //System.out.println("X:"+ StaticClass.x);
        
        //StaticClass.metodoEstatico();
        Scanner sc;
        
        sc = StaticClass.receberTeclado();
        
        System.out.println("Informe o Valor 1:");
        double valor1 = sc.nextDouble();
        
        System.out.println("Informe o Valor 2:");
        double valor2 = sc.nextDouble();
                
        StaticClass.soma(valor1 , valor2);
        
        System.out.println("Informe o Valor 1:");
        valor1 = sc.nextDouble();
        
        System.out.println("Informe o Valor 2:");
        valor2 = sc.nextDouble();
                
        StaticClass.divisão(valor1 , valor2);
        
        System.out.println("Informe o valor da base:");
        valor1 = sc.nextDouble();
        
        System.out.println("Informe o Valor do expoente:");
        valor2 = sc.nextDouble();
                
        StaticClass.potencia(valor1 , valor2);
        
        
    }
    
}
