/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_4;

/**
 *
 * @author danie
 */
public abstract class Aereos implements InterfaceVeiculos {
    
    private String modelo;
    private boolean helice;
    private boolean turbina;
    private int qtdMotor;
    private boolean tanqueCheio;

    public Aereos(String modelo, boolean helice, boolean turbina, int qtdMotor, boolean tanqueCheio) {
        this.modelo = modelo;
        this.helice = helice;
        this.turbina = turbina;
        this.qtdMotor = qtdMotor;
        this.tanqueCheio = tanqueCheio;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public boolean isHelice() {
        return helice;
    }

    public void setHelice(boolean helice) {
        this.helice = helice;
    }

    public boolean isTurbina() {
        return turbina;
    }

    public void setTurbina(boolean turbina) {
        this.turbina = turbina;
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
        System.out.println("Veiculo voando");
    }

    @Override
    public void abastecer() {
        System.out.println("Veiculo Abastecendo");
    }
    
    
    
    
    
}
