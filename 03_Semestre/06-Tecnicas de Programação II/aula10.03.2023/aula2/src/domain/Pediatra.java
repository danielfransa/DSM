package domain;

import java.time.LocalDate;
import java.util.Random;

public class Pediatra extends Medico implements ContratoVacina {

    public Pediatra(String nome, String email, String telefone, long matricula, LocalDate dataAdmissao, Integer crm) {
        super(nome, email, telefone, matricula, dataAdmissao, crm);
        //TODO Auto-generated constructor stub
    }

    @Override
    public String getInformacao() {
       return String.format("""
                            Nome: %s
                            E-mail: %s
                            Tel: %s
                            Matricula: %s
                            Admissão: %s
                            CRM: %s 
                            
                            """, 
                    getNome(), 
                    getEmail(), 
                    getTelefone(), 
                    getMatricula(), 
                    getDataAdmissao(), 
                    getCrm());
    }

    @Override
    public void executarProcedimento(Paciente paciente) throws Exception {
        System.out.printf("Atendendo %s...\n", paciente.getNome());
        System.out.println("Medindo a temperatura");
        Thread.sleep(3000);
        System.out.printf("Temperatura %s graus.\n", new Random().nextInt(37, 40));
        vacinar(paciente);
        Thread.sleep(3000);
        System.out.printf("Finalizou o atendimento de %s.\n", paciente.getNome());
        System.out.println("=)");

    }

    @Override
    public void vacinar(Paciente paciente) {
        System.out.printf("Aplicando a vacina em %s...\n", paciente.getNome());
        System.out.printf("Finalizou o atendimento de %s.\n", paciente.getNome());
        System.out.println("=)");
    }
    
}
