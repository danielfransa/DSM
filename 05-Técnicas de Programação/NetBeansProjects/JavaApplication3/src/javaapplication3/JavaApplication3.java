/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication3;

import java.util.Scanner;

/**
 *
 * @author aluno.si
 */
public class JavaApplication3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       /*
       Moto moto1 = new Moto(1, 2, "Azul");
       Moto moto2 = new Moto(1, 3, "Preta");
       
        System.out.println("Motor: "+moto1.getMotor());
        System.out.println("Rodas: "+moto1.getRodas());
        System.out.println("Cor: "+moto1.getCor());
        
        System.out.println("Motor: "+moto2.getMotor());
        System.out.println("Rodas: "+moto2.getRodas());
        System.out.println("Cor: "+moto2.getCor());
        */
       // uso da palavra chave final
       //final int x = 10;
       
       Scanner sc = new Scanner(System.in);
      
       Funcoes f = new Funcoes();
       double p, potencia, raiz;
       
       p = sc.nextDouble();
       potencia = f.potencia(p);
       
       raiz  = f.raiz(potencia);
       
       //f.setPotencia(potencia);
       //f.setRaiz(raiz);
       
       
       f.imprimir(potencia, raiz);
       
       
       

    }
    
}
