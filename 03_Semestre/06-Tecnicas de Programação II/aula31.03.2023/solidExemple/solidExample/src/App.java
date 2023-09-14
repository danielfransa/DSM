
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import domain.Aluno;
import domain.Departamento;
import domain.Professor;
import domain.Universidade;

public class App {
    public static void main(String[] args) throws Exception {

        List<Professor> lista = new ArrayList<>();
        lista.add(new Professor("Caroline"));
        lista.add(new Professor("Klayvert"));
        
        Departamento deptoTI = new Departamento("Tecnologia da Informação").
        setEmail("ti@fatecarars.sp.gov.br").
        setProfessores(lista);

        Universidade fatec = new Universidade();
        fatec.criarDepartamento(deptoTI);
        fatec.listarDepartamentos();


        deptoTI.criarProfessor();

        fatec.listarDepartamentos();

        List<Aluno> alunos = new ArrayList<>();
        alunos.add(new Aluno("Huguinho"));
        alunos.add(new Aluno("Zezinho"));
        alunos.add(new Aluno("Luizinho"));

        deptoTI.getProfessores().get(0).setAlunos(alunos);
        
        deptoTI.getProfessores().get(1).setAlunos(alunos);

        fatec.listarDepartamentos();


        /*
            Curso curso = new Curso("Desemvolvedor de Sistemas Multiplataforma", 
                Arrays.asList(
                    "CI/CD", "TDD", "DDD", "Mobo Development", "UI/UX"
                ));

            Curso cursoSI = new Curso("Sistema para Internet", 
                Arrays.asList(
                    "Mobo Development", "UI/UX", "Web Development", "Backend Development"
                ));

            Aluno a1 = new Aluno("João");
            Aluno a2 = new Aluno("Maria");
            Aluno a3 = new Aluno("José");

            List<Aluno> alunos = Arrays.asList(a1, a3);

            Professor p1 = new Professor(alunos);

            p1.ensina(curso);

            p1.setAlunos(Arrays.asList(a2));
            p1.ensina(cursoSI);
         */

    }
}
