/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication2;

/**
 *
 * @author aluno.si
 */
public class Carro {
    private int rodas = 4;
    private int portas = 4;
    private String placa = "ABC-1234";
    private String cor = "Prata";
    private boolean gasolina = true;
    
    //métodos ==> mesma coisa que função
    
    //get
    
    public int getRodas(){
        return rodas;
    }

    public int getPortas(){
        return portas;
    }

    public String getPlacas(){
        return placa;
    }
    
    public String getCor(){
        return cor;
    }    

    //set
    
    public void setPortas(int portas){
        //this.portas é a porta da classe e recebe da portas variavel do metodo.
        this.portas = portas;
    }
    
    public void setRodas(int rodas){
        this.rodas = rodas;
    }

    public void setRodas(String placa){
        this.placa = placa;
    }

    public void setCor(String cor){
        this.cor = cor;
    }
    
    
    //imprimir 
    public void imprimir(){
        System.out.println("Rodas: "+rodas);
        System.out.println("Portas: "+portas);
        System.out.println("Placa: "+placa);
        System.out.println("Cor: "+cor);
    } 
    
    public boolean temGasolina(){
        return gasolina;
    }
    
}
