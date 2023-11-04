 package domain;

 public abstract class Pessoa {

    private String nome;
    private String email;
    private String telefone;

    public Pessoa(String nome, String email, String telefone) {
        this.nome = nome;
        this.email = email;
        this.telefone = telefone;         
    }

    public String getNome() {
        return nome;
    }
    public String getEmail() {
        return email;
    }
    public String getTelefone() {
        return telefone;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    public void setEmail(String email) {
        this.email = email;
    }
    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }


    public abstract String getInformacao();
    /*
    public  String getInformacao() {
        return String.format("Nome: %s\nE-mail: %s\nTel: %s\n\n", nome, email, telefone);
    }

     
    @Override
    public String toString() {
        return "Pessoa{"+ "nome=" +
                ", email="+ email +
                ", telefone=" + telefone + " }";
    }
    */
}