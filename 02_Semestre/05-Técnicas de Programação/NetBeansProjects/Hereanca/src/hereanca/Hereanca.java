/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package hereanca;

/**
 *
 * @author aluno.si
 */
public class Hereanca {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Carro c = new Carro(1, 4, "Azul", 4, 2);
        
        Moto m = new Moto(4, 2, 1, 2, "Vermelha");
        
        //System.out.println("Airbag: "+c.getAirbag());
        //System.out.println("Portas: "+c.getPortas());
        
        c.imprimir();
        
        System.out.println("-----------------------");
        
        c.setRodas(5);
        
        c.imprimir();
       
        System.out.println("-----------------------");
        
        m.imprimir();
        
        
    }
    
}
