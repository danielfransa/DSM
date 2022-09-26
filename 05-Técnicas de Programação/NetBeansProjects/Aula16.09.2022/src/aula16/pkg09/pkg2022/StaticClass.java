/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula16.pkg09.pkg2022;

import java.util.Scanner;

/**
 *
 * @author aluno.si
 */
public class StaticClass {
    
         public static void soma(double valor1, double valor2){
            System.out.println("Soma: "+ (valor1+valor2));
        }
         
         public static void divisão(double valor1, double valor2){
            System.out.println("Divisão: "+ (valor1 / valor2));
        }

         public static void potencia(double base, double expoente){
            System.out.println("Potência: "+ Math.pow(base, expoente));
         }

         public static Scanner receberTeclado(){
            Scanner sc = new Scanner(System.in);
             return sc;
        }
        //public static final int x = 10;
    
        //public static void metodoEstatico(){
          // System.out.println("Método estatico!!!");
      //}
    
}
