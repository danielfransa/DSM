package domain.pizza;

import java.util.List;

public abstract class Pizza {
    
    private Double preco;
    private String nome;
    private List<String> ingredientes;

    public Pizza(Double preco, String nome, List<String> ingredientes) {
        this.preco = preco;
        this.nome = nome;
        this.ingredientes = ingredientes;
    }
    
    public Double getPreco() {
        return preco;
    }

    public void setPreco(Double preco) {
        this.preco = preco;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public List<String> getIngredientes() {
        return ingredientes;
    }

    public void setIngredientes(List<String> ingredientes) {
        this.ingredientes = ingredientes;
    }

    public String getDescricao() {
        return this.getClass().getSimpleName() +
                "{" + "preco=" + preco + 
                ", nome=" + nome + 
                ", ingredientes=" + ingredientes + '}';
    }
    
}