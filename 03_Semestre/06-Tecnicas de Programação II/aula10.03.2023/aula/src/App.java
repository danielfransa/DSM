import java.util.Scanner;

import domain.Pizzaria;
import domain.enums.TipoPizza;

public class App {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        var pizzaria = new Pizzaria();
        
        System.out.println("Selecione o Tipo de Pizza:");
        System.out.println("1. Calabesa...");
        int idPizza = in.nextInt();


        TipoPizza tipo = TipoPizza.getTipo(idPizza);
        
        // Execução do contexto
        pizzaria.criarPizza(tipo);
        pizzaria.delivery();
    }
}
