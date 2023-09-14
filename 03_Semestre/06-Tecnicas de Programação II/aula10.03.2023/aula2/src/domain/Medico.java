package domain;

import java.time.LocalDate;

public abstract class Medico extends Funcionario{

    private Integer crm;

   
    public Medico(String nome, String email, String telefone, long matricula, LocalDate dataAdmissao, Integer crm) {
        super(nome, email, telefone, matricula, dataAdmissao);
        this.crm = crm;
    }

    public Integer getCrm() {
        return crm;
    }


    public void setCrm(Integer crm) {
        this.crm = crm;
    }

    
    public abstract void executarProcedimento(Paciente paciente) throws Exception; 
    
}
