/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_4;

/**
 *
 * @author danie
 */
public class Aviao extends Aereos{
    
    private int numPassageiros;

    public Aviao(int numPassageiros, String modelo, boolean helice, boolean turbina, int qtdMotor, boolean tanqueCheio) {
        super(modelo, helice, turbina, qtdMotor, tanqueCheio);
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
        System.out.println("Avião sendo abastecido");
    }

    @Override
    public void mover() {
        System.out.println("Avião esta voando tranquilamente");
    }
    
    public void imprimirAtributos() {
        System.out.println("Modelo: "+super.getModelo());
        System.out.println("O avião possui hélices? "+super.isHelice());
        if(isHelice()){
        } else {
            System.out.println("O avião possui Turbinas: "+super.isTurbina());
        }
        System.out.println("Quantidades de Motor: "+super.getQtdMotor());
        System.out.println("O tanque esta cheio? "+super.isTanqueCheio());
        System.out.println("Quantidade passageiros: "+getNumPassageiros());
        System.out.println();
        if(isTanqueCheio()!= true){
            System.out.println("ATENÇÃO!!!");
            abastecer();
        }else{
            mover();
        }
    }
    
}
