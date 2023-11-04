/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_4;

/**
 *
 * @author danie
 */
public class Navio extends Aquaticos {
    
    private int numPassageiros;

    public Navio(int numPassageiros, String modelo, boolean motor, boolean vela, int qtdMotor) {
        super(modelo, motor, vela, qtdMotor);
        this.numPassageiros = numPassageiros;
    }

    public int getNumPassageiros() {
        return numPassageiros;
    }

    public void setNumPassageiros(int numPassageiros) {
        this.numPassageiros = numPassageiros;
    }

    @Override
    public void abastecer() {
        System.out.println("Abastecendo o Navio");
    }

    @Override
    public void mover() {
        System.out.println("O Navio esta navegando");
    }
    
    public void imprimirAtributos() {
        System.out.println("Modelo: "+super.getModelo());
        System.out.println("O Veiculo Possui Motor? "+super.isMotor());
        if(isMotor()!= true){
            System.out.println("O Veiculo Possui Velas? "+super.isVela());
        }
        if(isMotor()){
            System.out.println("Qual a quantidade de Motor: "+super.getQtdMotor());
        }
        
        if(isVela()){
            System.out.println("Qual a quantidade de velas: "+super.getQtdMotor());
        }
        if(isMotor()){
            System.out.println("O tanque esta cheio? "+super.isTanqueCheio());
        }
        
        System.out.println("Quantidade passageiros: "+getNumPassageiros());
        System.out.println();
        if(isMotor() && isTanqueCheio()!= true){
            System.out.println("ATENÇÃO!!!");
            abastecer();
        }else if(isMotor()){
            mover();
        }
        if(isVela()){
            System.out.println("Estenda as Velas vamos navegar!!!!");
        }
    }
    
    
}
