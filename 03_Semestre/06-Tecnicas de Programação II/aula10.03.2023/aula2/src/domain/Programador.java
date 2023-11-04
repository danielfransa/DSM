package domain;

import java.time.LocalDate;
import java.util.List;

public class Programador extends Funcionario {

    private List<String> stack; 

    

    public Programador(String nome, String email, String telefone, long matricula, LocalDate dataAdmissao, List<String> stack) {
        super(nome, email, telefone, matricula, dataAdmissao);
        this.stack = stack;
    }

    public List<String> getStack() {
        return stack;
    }



    public void setStack(List<String> stack) {
        this.stack = stack;
    }
   

    @Override
    public String getInformacao() {
        return String.format("Nome: %s\nE-mail: %s\nTel: %s\nMatricula: %s\nAdmissão: %s\nStack: %s \n", getNome(), getEmail(), getTelefone(), getMatricula(), getDataAdmissao(), stack);
    }
    
}
