/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exercicio_4;

/**
 *
 * @author danie
 */
public class Exercicio_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        //carro
        System.out.println("CARRO");
        Carro c = new Carro(5, "Gol", true, 70, false);
        //já que possui rodas e não esteira.
        c.setQtdRodas(4);
        c.imprimirAtributos();
        
        System.out.println();
        
        //navio
        System.out.println("NAVIO");
        Navio n = new Navio(2000, "Transatlântico", true, false, 20);
        n.setTanqueCheio(false);
        n.imprimirAtributos();
        
        System.out.println();
        
        //avião
        System.out.println("AVIÃO");
        Aviao a = new Aviao(350, "Jumbo", false, true, 4, true);
        a.imprimirAtributos();
        
    }
    
}
