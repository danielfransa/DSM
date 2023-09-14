import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import domain.Aluno;
import domain.Curso;
import domain.Professor;

public class App {
    public static void main(String[] args) throws Exception {
        
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


    }
}
