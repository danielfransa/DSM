/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author aluno.si
 */
public class animal implements MinhaInterface {
    
    private int tamanho;
    private String nome;

    public animal(int tamanho, String nome) {
        this.tamanho = tamanho;
        this.nome = nome;
    }
    
    
    
    
    public void mover(){
        System.out.println("Movendo-se!!!");
    }

    public int getTamanho() {
        return tamanho;
    }

    public String getNome() {
        return nome;
    }

    @Override
    public void imcH() {
        
    }

    @Override
    public void imcA() {
        
    }
    
    
    
}
