package model;

public abstract class Pizza {

    String nome;
    double valor;
    String [] ingredientes;

    public Pizza(String nome, double valor, String[] ingredientes) {
        this.nome = nome;
        this.valor = valor;
        this.ingredientes = ingredientes;
    }

    public String descricao() {
       return String.format("%s - R$%.2f\nIngredientes: %s", nome, valor, String.join(", ", ingredientes));
    }

    public String getNome() {
        return nome;
    }

    public double getValor() {
        return valor;
    }
    
    public String[] getIngredientes() {
        return ingredientes;
    }

    
}
