/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author aluno.si
 */
public class sapo extends animal{
    
    private int patas;

    public sapo(int patas, int tamanho, String nome) {
        super(tamanho, nome);
        this.patas = patas;
    }
    
    @Override
    public String getNome() {
         return super.getNome();
    }

    @Override
    public void mover() {
        System.out.println("Sapo "+getNome()+" Pulando!!!");
    }

    @Override
    public void imcA() {
        super.imcA();
    }
    
    
    
    
}
