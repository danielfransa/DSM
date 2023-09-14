import java.util.List;
import java.util.Random;

import model.Cangaceira;
import model.Pizza;
import model.PizzaRespository;

public class Main {
    public static void main(String[] args) throws Exception {
        
        // Cangaceira cangaceira = new Cangaceira("Cangaceira", 51.8D, new String[] { "Molho de tomate", "Queijo coalho", "Carne de sol", "Cebola", "Tomate", "Coentro" });

        List<Pizza> pizzas = PizzaRespository.getAllPizzas();

        int p = new Random().nextInt(3) + 1;

        // System.out.println(cangaceira.descricao());
        System.out.println(pizzas.get(p).descricao());
    }
}
