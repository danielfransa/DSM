package domain;

public class Conta {

    private int numero;
    private double saldo;
    private double limite;
    private Agencia agencia;

    
    public Conta() {
    }

    
    public Conta(int numero, double saldo, double limite, Agencia agencia) {
        this.numero = numero;
        this.saldo = saldo;
        this.limite = limite;
        this.agencia = agencia;
    }


    public int getNumero() {
        return numero;
    }
    public void setNumero(int numero) {
        this.numero = numero;
    }
    public double getSaldo() {
        return saldo;
    }
    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }
    public double getLimite() {
        return limite;
    }
    public void setLimite(double limite) {
        this.limite = limite;
    }

    public void exibeSaldo(int numeroConta){
        getSaldo();
    }
    
    public void exibeLimite(int numeroConta){
        getLimite();
    }


    public Agencia getAgencia() {
        return agencia;
    }


    public void setAgencia(Agencia agencia) {
        this.agencia = agencia;
    }
    

}