/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_3;

/**
 *
 * @author danie
 */
public class Ave extends Animal {

    public Ave(int patas) {
        super(patas);
    }

    @Override
    public void comer() {
        System.out.println("A ave esta:");
        super.comer();
    }

    @Override
    public void mover() {
        System.out.println("A ave esta:");
        super.mover();
    }

    @Override
    public void imprimir() {
        System.out.println("A ave tem:");
        super.imprimir();
    }
    
    
    
    
    
    
    
}
