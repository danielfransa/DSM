/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication2;


/**
 *
 * @author aluno.si
 */
public class JavaApplication2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
                
                    //new palavra reservada para instaciar
        Carro carro1 = new Carro();
        int portasLocal;
        
        System.out.println("Quantidade de portas do Carro 1: "+carro1.getPortas());
        
        carro1.setPortas(3);
        
        System.out.println("Quantidade de portas do Carro 1: "+carro1.getPortas());
        
        Carro carro2 = new Carro();
        
        System.out.println("Quantidade de portas do Carro 2: "+carro2.getPortas());






    // receber a quantidade de ´prtas do veiculos
        //portasLocal = carro1.getPortas();
        //portasLocal = portasLocal + 1;
        
        //System.out.println("portasLocal: "+portasLocal);
        //System.out.println("Portas do Carro: "+carro1.getPortas());
        
        //System.out.println("Caracteristicas do carro 1: ");
        //carro1.imprimir();
        
        //Carro carro2 = new Carro();
       //System.out.println("Caracteristicas do carro 2: ");
       //carro2.imprimir();
        
        //System.out.println("O carro tem gasolina? "+carro1.temGasolina());
    }

  
    
}
