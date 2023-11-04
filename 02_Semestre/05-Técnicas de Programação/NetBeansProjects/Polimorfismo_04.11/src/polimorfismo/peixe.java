/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author aluno.si
 */
public class peixe extends animal  {

    private int nadadeira;

    public peixe(int nadadeira, int tamanho, String nome) {
        super(tamanho, nome);
        this.nadadeira = nadadeira;
    }
    
    @Override
          public String getNome() {
             return super.getNome();
    }

    @Override
    public void mover() {
        System.out.println("Peixe "+getNome()+ " Nadando!!!");
        
    }

    @Override
    public void imcA() {
        super.imcA();
    }
   
    

}
