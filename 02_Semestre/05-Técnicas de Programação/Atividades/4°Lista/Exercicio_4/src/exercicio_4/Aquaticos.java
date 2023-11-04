/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_4;

/**
 *
 * @author danie
 */
public abstract class Aquaticos implements InterfaceVeiculos{
    
    private String modelo;
    private boolean motor;
    private boolean vela;
    private int qtdMotor;
    private boolean tanqueCheio;

    
    //já que um barco pode ser a vela não coloquei tanqueCheio no construtor.
    public Aquaticos(String modelo, boolean motor, boolean vela, int qtdMotor) {
        this.modelo = modelo;
        this.motor = motor;
        this.vela = vela;
        this.qtdMotor = qtdMotor;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public boolean isMotor() {
        return motor;
    }

    public void setMotor(boolean motor) {
        this.motor = motor;
    }

    public boolean isVela() {
        return vela;
    }

    public void setVela(boolean vela) {
        this.vela = vela;
    }

    public int getQtdMotor() {
        return qtdMotor;
    }

    public void setQtdMotor(int qtdMotor) {
        this.qtdMotor = qtdMotor;
    }

    public boolean isTanqueCheio() {
        return tanqueCheio;
    }

    public void setTanqueCheio(boolean tanqueCheio) {
        this.tanqueCheio = tanqueCheio;
    }

    @Override
    public void mover() {
        System.out.println("Veiculo Navegando");
    }

    @Override
    public void abastecer() {
        System.out.println("Veiculo Abastecendo");    
    }
    
    
    
}
