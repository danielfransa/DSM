package domain;

import java.util.ArrayList;
import java.util.List;

public class Universidade {
    
    private List<Departamento> departamentos = new ArrayList<>();

    
    public void criarDepartamento(Departamento departamento) {
        this.departamentos.add(departamento);        
    }

    public void exculirDepartamento(Departamento departamento) {
        this.departamentos.remove(departamento);
    }

    public void listarDepartamentos() {
        System.out.println("Departamentos\n");
        this.departamentos.forEach(d -> {
            System.out.println(d);
        });
        System.out.println("\n____________________________________________________________________");
    }


    public List<Departamento> getDepartamentos() {
        return departamentos;
    }

    public void setDepartamentos(List<Departamento> departamentos) {
        this.departamentos = departamentos;
    }

    @Override
    public String toString() {
        return "Universidade [departamentos=" + departamentos + "]";
    }

    

}
