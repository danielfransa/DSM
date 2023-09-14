/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exercicio_4;

/**
 *
 * @author danie
 */
public class Carro extends Terrestres {
    
    private int numPassageiros;

    public Carro(int numPassageiros, String modelo, boolean rodas, int cvMotor, boolean tanqueCheio) {
        super(modelo, rodas, cvMotor, tanqueCheio);
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
        System.out.println("O Veiculo Carro Precisa ser abastecido");
    }

    @Override
    public void mover() {
        System.out.println("Veiculo Carro esta Movendo-se");
    }
    
    public void imprimirAtributos() {
        System.out.println("Modelo: "+super.getModelo());
        System.out.println("O Veiculo Possui Rodas? "+super.isRodas());
        if(isRodas()){
            System.out.println("Quantidades de Rodas: "+super.getQtdRodas());
        }
        System.out.println("Potência Motor: "+super.getCvMotor());
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
