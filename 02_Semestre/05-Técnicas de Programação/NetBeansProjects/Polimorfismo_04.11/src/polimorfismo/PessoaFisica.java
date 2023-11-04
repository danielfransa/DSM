/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author aluno.si
 */
public class PessoaFisica  extends Pessoa{
    
    /* atributos */
    private double peso;  //Kg
    private double altura; //Metros

    public PessoaFisica(double peso, double altura) {
        this.peso = peso;
        this.altura = altura;
    }

    @Override
    public void imprimir() {
        System.out.println("implementar.....");
    }

    @Override
    public void imcH() {
        super.imcH(); 
    }
    
    
    
    
    
}
