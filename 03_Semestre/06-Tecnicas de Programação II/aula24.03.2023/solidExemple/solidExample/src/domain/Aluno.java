package domain;

import java.util.ArrayList;
import java.util.List;

public class Aluno {

    private String nome;
    private List<String> conecimentos = new ArrayList<>();

    
    public Aluno(String nome) {
        this.nome = nome;
    }

    public Aluno(String nome, List<String> conecimentos) {
        this.nome = nome;
        this.conecimentos = conecimentos;
    }
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public List<String> getConecimentos() {
        return conecimentos;
    }

    public void setConecimentos(List<String> conecimentos) {
        this.conecimentos = conecimentos;
    }

    public void assimilar(List<String> conhecimentos) {
        this.conecimentos.addAll(conhecimentos);
    }

    @Override
    public String toString() {
        return "Aluno [nome=" + nome + ", conecimentos=" + conecimentos + "]";
    }

       

}
