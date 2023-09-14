package domain;

public class Paciente extends Pessoa {

    public Paciente(String nome, String email, String telefone) {
        super(nome, email, telefone);
    }

    @Override
    public String getInformacao() {
        return String.format("""
                            Nome: %s
                            E-mail: %s
                            Tel: %s 
                            
                            """, 
                    getNome(), 
                    getEmail(), 
                    getTelefone());
    }

}
