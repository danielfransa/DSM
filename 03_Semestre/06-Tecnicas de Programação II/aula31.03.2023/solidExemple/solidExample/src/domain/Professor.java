package domain;

import java.util.ArrayList;
import java.util.List;


public class Professor {

    private String nome;
    private List<Aluno> alunos = new ArrayList<>();


    
    

    public Professor(String nome) {
        this.nome = nome;
    }

    public Professor(String nome, List<Aluno> alunos) {
        this.nome = nome;
        this.alunos = alunos;
    }

    public void ensina(Curso curso){
        System.out.println(curso.getNome());
        alunos.forEach(a -> a.assimilar(curso.getConhecimentos()));
        alunos.forEach(System.out::println);
    }

    public List<Aluno> getAlunos() {
        return alunos;
    }

    public void setAlunos(List<Aluno> alunos) {
        this.alunos = alunos;
    }

    @Override
    public String toString() {
        return "Professor [nome=" + nome + ", alunos=" + alunos + "]";
    }

    

}
