/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaexception;

import java.util.InputMismatchException;
import java.util.Scanner;

/**
 *
 * @author aluno.si
 */
public class JavaException {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int x;
        int y;
        
        Scanner sc = new Scanner(System.in);
                
         try{
            System.out.println("Digite um número: ");
            x = sc.nextInt();
            System.out.println("Digite outro número: ");
            y = sc.nextInt();
            System.out.println("Resultado da Divisão: "+x/y);
            
         }catch(InputMismatchException | ArithmeticException e ){
             System.out.println("Tratando o erro!!!" + e.getMessage());
         }
                  
                
         /*
         }catch(InputMismatchException e){
            sc = null; 
            sc = new Scanner(System.in);
            x = 0;
            System.out.println("Mensagem de Erro: -> "+e.getMessage());
            System.out.println("Digite um número: ");
            x = sc.nextInt();
            System.out.println("Digite outro número: ");
            y = sc.nextInt();
            System.out.println(x/y);
         // Trata o valor que foi digitado incorretamente    
         }catch(NumberFormatException e){
            System.out.println("Digitou formato incorreto: "+e.getMessage());

         // Trata divisões (inteiras) por 0
         }catch(ArithmeticException e){
            System.out.println("Você dividiu por 0: "+ e.getMessage());
            System.out.println("Digite um número: ");
            x = sc.nextInt();
            System.out.println("Digite outro número: ");
            y = sc.nextInt();
            System.out.println(x/y);
         }

         */
        
        
    }
    
}
