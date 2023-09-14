package domain;

import java.time.LocalDate;

public abstract class Funcionario extends Pessoa {

    private Long matricula;
    private LocalDate dataAdmissao;

    public Long getMatricula() {
        return matricula;
    }

    public LocalDate getDataAdmissao() {
        return dataAdmissao;
    }

    public void setMatricula(Long matricula) {
        this.matricula = matricula;
    }

    public void setDataAdmissao(LocalDate dataAdmissão) {
        this.dataAdmissao = dataAdmissão;
    }

    public Funcionario(String nome, String email, String telefone, long matricula, LocalDate dataAdmissao) {
        super(nome, email, telefone);
        this.matricula = matricula;
        this.dataAdmissao = dataAdmissao;
        
    }
    
}
