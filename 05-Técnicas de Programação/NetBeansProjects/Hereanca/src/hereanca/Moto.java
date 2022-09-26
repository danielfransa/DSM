/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package hereanca;

/**
 *
 * @author aluno.si
 */
public class Moto extends Veiculo{
    
    private int pedal;
    private int retrovisor;

    public Moto(int pedal, int retrovisor, int motor, int rodas, String cor) {
        super(motor, rodas, cor);
        this.pedal = pedal;
        this.retrovisor = retrovisor;
    }
        
    public int getRetrovisor() {
        return retrovisor;
    }

    public void setRetrovisor(int retrovisor) {
        this.retrovisor = retrovisor;
    }

    public int getPedal() {
        return pedal;
    }

    public void setPedal(int pedal) {
        this.pedal = pedal;
    }

    @Override
    public void imprimir() {
        super.imprimir();
        System.out.println("Pedal: "+pedal);
        System.out.println("Retrovisor: "+retrovisor);
    }
    
    

    
}
