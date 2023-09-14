import java.time.LocalDate;

import domain.Paciente;
import domain.Pediatra;

public class App {

    public static void main(String[] args) throws Exception {

        Paciente p1 = new Paciente("Regis", "regis@.bol.com.br", "(19)91875-8547");

        Pediatra pediatra = new Pediatra("José", "jose@bol.com.br", "(19)91875-8745", 12354, LocalDate.of(2015, 10, 15),
                1256);

        pediatra.executarProcedimento(p1);
        

    }

}
