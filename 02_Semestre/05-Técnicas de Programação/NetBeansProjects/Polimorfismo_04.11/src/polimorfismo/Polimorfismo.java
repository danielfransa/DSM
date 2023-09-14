/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author aluno.si
 */
public class Polimorfismo {

    public static void main(String[] args) {

        animal a;

        a = new peixe(4, 50, "Manuel");
        a.mover();

        a = new ave(2, 25, "Maria");
        a.mover();

        a = new sapo(2, 10, "João");
        a.mover();

        ExtendAbstract e = new ExtendAbstract();
        e.texto1();
        
        
    
    }
}
