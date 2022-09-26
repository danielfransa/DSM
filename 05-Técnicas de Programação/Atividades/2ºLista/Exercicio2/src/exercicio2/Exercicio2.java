/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exercicio2;

import java.util.Scanner;

/**
 *
 * @author danie
 */
public class Exercicio2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        //exercicio1
        System.out.println("Exercicio1");
        System.out.println("Insira um numero");
        int num = sc.nextInt();
        
        if(num > 20){
            System.out.println("Parabens seu numero "+num +" e maior que 20");
        }
        
        //exercicio 2
        System.out.println("\n");
        System.out.println("Exercicio2");
        int[] nums = new int[2];
        int sum=0;
        for(int i=0; i<2; i++){
            System.out.println("Insira o valor do "+(i+1)+"º numero");
            nums[i] = sc.nextInt();
        }
        
        for(int i=0; i<nums.length; i++){
            sum += nums[i]; 
        }
        System.out.println(nums[0]+"+"+nums[1]+" = "+sum);
        
        //exercicio 3
        System.out.println("\n");
        System.out.println("Exercicio3");
        System.out.println("Insira um numero");
        double num1 = sc.nextInt();
        
        if(num1 > 0){
            System.out.println("Raiz: "+Math.sqrt(num1)); 
        }else{
            System.out.println("Quadrado: "+Math.pow(num1, 2));
        }
        
        //exercicio 4
        System.out.println("\n");
        System.out.println("Exercicio4");
        System.out.println("Insira um numero");
        num = sc.nextInt();
        
        if(num % 3 == 0){
            System.out.println(num+" E multipo de 3");
        }else{
            System.out.println(num+" Nao e multipo de 3");
        }
        
        //exercicio 5
        System.out.println("\n");
        System.out.println("Exercicio5");
        System.out.println("Insira um numero");
        num = sc.nextInt();
        
        if(num % 3 == 0 && num % 7 == 0 ){
            System.out.println(num+" E divisivel por 3 e por 7");
        }else if(num % 3 == 0){
            System.out.println(num+" E divisivel apenas por 3");
        }else if(num % 7 == 0){
            System.out.println(num+" E divisivel apenas por 7");
        }else {
            System.out.println(num+" nao e divisivel por 3 e por 7");
        }
        
        //exercicio 6
        System.out.println("\n");
        System.out.println("Exercicio6");
        System.out.println("Insira um numero");
        num = sc.nextInt();
        
        if(num % 10 == 0 && num % 5 == 0 && num % 2 == 0 ){
            System.out.println(num+" E divisivel por 10, por 5 e por 2");
        }else if(num % 10 == 0 ){
            System.out.println(num+" E divisivel por 10 e por 2");
        }else if(num == 2 || num == 4 || num == 6 || num == 8){
            System.out.println(num+" E divisivel apenas por 2");
        }else if(num % 5 == 0){
            System.out.println(num+" E divisivel apenas por 5");
        }else {
            System.out.println(num+" nao e divisivel por nenhum dos numeros");
        }
    }
    
}
