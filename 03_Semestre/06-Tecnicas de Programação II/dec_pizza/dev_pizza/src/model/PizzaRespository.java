package model;

import java.util.Arrays;
import java.util.List;

public class PizzaRespository {

    public static List<Pizza> getAllPizzas() {
        return Arrays.asList(
                new Calabresa("Calabresa", 47.5D, new String[] { "Molho de tomate", "Queijo", "Calabresa", "Cebola" }),
                new Cangaceira("Cangaceira", 51.8D, new String[] { "Molho de tomate", "Queijo coalho", "Carne de sol", "Cebola", "Tomate", "Coentro" }),
                new Portuguesa("Portuguesa", 42.6D, new String[] { "Molho de tomate", "Queijo", "Presunto", "Mussarela", "Cebola", "Ovo", "Azeitona" }),
                new QuatroQueijos("Quatro Queijos", 46.8D, new String[] { "Molho de tomate", "Queijo mussarela", "Queijo parmesão", "Queijo provolone", "Queijo gorgonzola" }));
    }

}
