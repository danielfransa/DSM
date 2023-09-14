/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication3;

/**
 *
 * @author aluno.si
 */
public class Funcoes {
    
    private double potencia = 0;
    private double raiz = 0;
    
    public double potencia(double p){
        double r;
        
        r = Math.pow(p, 2);
      
        return r;
          
    }
    
    public double raiz(double d){
        double r;
        
        r = Math.sqrt(d);
       
        return r;
    }

    public void setPotencia(double potencia) {
        this.potencia = potencia;
    }

    public void setRaiz(double raiz) {
        this.raiz = raiz;
    }
    
    public void imprimir(double potencia, double raiz){
        System.out.println("Potencia: "+potencia);
        System.out.println("Raiz: "+raiz);
    }
}
