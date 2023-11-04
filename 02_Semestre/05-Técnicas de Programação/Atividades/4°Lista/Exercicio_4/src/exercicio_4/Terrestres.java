/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_4;

/**
 *
 * @author danie
 */
public abstract class Terrestres implements InterfaceVeiculos {
    
    private String modelo;
    private boolean rodas;
    private int qtdRodas;
    private int cvMotor;
    private boolean tanqueCheio;

    //como o veiculo terrestre pode ou não ter rodas qtdRodas não esta no construtor
    public Terrestres(String modelo, boolean rodas, int cvMotor, boolean tanqueCheio) {
        this.modelo = modelo;
        this.rodas = rodas;
        this.cvMotor = cvMotor;
        this.tanqueCheio = tanqueCheio;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public boolean isRodas() {
        return rodas;
    }

    public void setRodas(boolean rodas) {
        this.rodas = rodas;
    }

    public int getQtdRodas() {
        return qtdRodas;
    }

    public void setQtdRodas(int qtdRodas) {
        this.qtdRodas = qtdRodas;
    }

    public int getCvMotor() {
        return cvMotor;
    }

    public void setCvMotor(int cvMotor) {
        this.cvMotor = cvMotor;
    }

    public boolean isTanqueCheio() {
        return tanqueCheio;
    }

    public void setTanqueCheio(boolean tanqueCheio) {
        this.tanqueCheio = tanqueCheio;
    }

    @Override
    public void mover() {
        System.out.println("Veiculo Movendo-se");
    }

    @Override
    public void abastecer() {
        System.out.println("Veiculo Abastecendo");
    }
    
    
    
    
}
