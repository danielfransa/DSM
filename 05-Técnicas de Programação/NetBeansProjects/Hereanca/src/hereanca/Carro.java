/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package hereanca;

/**
 *
 * @author aluno.si
 */
public class Carro extends Veiculo {
    
    private int portas;
    private int airbag;
    
    public Carro(int motor, int rodas, String cor, int portas, int airbag){
        super(motor, rodas, cor);
        this.portas = portas;
        this.airbag = airbag;
    }
    
    public void setPortas(int portas){
        this.portas = portas;
    }
    
    public void setAirbag(int airbag){
        this.airbag = airbag;
    }
    
    public int getPortas(){
        return portas;
    }
    
    public int getAirbag(){
        return airbag;
    }
    
    
    
    @Override
    public void imprimir(){
        super.imprimir();
        System.out.println("Portas: "+portas);
        System.out.println("Airbag: "+airbag);
        
        
    }
}
