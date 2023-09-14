/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_3;

/**
 *
 * @author danie
 */
public class Animal {
    
    private int patas;

    public Animal(int patas) {
        this.patas = patas;
    }
        
    public int getPatas() {
        return patas;
    }

    public void setPatas(int patas) {
        this.patas = patas;
    }
   
    public void mover(){
        System.out.println("Movendo-se...");
    }
    
    public void comer(){
        System.out.println("Comendo...");
    }
    
    public void imprimir(){
        System.out.println(patas+" patas!");
         
    }
    
}
