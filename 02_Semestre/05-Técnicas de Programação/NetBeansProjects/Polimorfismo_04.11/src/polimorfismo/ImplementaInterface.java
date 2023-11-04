/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author aluno.si
 */
public class ImplementaInterface implements MinhaInterface {
    
    

    @Override
    public void imcH() {
        System.out.println("IMC - Humano");
       
    }

    @Override
    public void imcA() {
        System.out.println("IMC - Animal");
        
    }
    
}
