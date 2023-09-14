/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package hereanca;

/**
 *
 * @author aluno.si
 */
public class Veiculo {
    
        private int motor;
        private int rodas;
        private String cor;

    public Veiculo(int motor, int rodas, String cor) {
        this.motor = motor;
        this.rodas = rodas;
        this.cor = cor;
    }
        
   
    public int getMotor() {
        return motor;
    }

    public int getRodas() {
        return rodas;
    }
    
    public String getCor() {
        return cor;
    }

    public void setMotor(int motor) {
        this.motor = motor;
    }
    
    public void setRodas(int rodas) {
        this.rodas = rodas;
    }
      
    public void setCor(String cor) {
        this.cor = cor;
    }
    
    public void imprimir(){
        System.out.println("Motor: "+motor);
        System.out.println("Rodas: "+rodas);
        System.out.println("Cor: "+cor);
    }
    
    
}
