package domain.factory;

import java.util.Arrays;

import domain.enums.TipoPizza;
import domain.pizza.Calabresa;
import domain.pizza.Pizza;

public class PizzaFactory {
    
    public Pizza criarPizza(TipoPizza tipo) {
        
        Pizza pizza = null;
        
        switch (tipo) {
            case CALABRESA -> pizza = new Calabresa(
                    50D, 
                    "Calabresa Premium", 
                    Arrays.asList(
                            "Molho de tomate",
                            "Calabresa em rodelas", 
                            "Cebola",
                            "Pimenta calabresa em flocos"));
            
            //TODO: Implementar as demais Pizzas
                
            default -> throw new AssertionError();
        }
        
        return pizza;
    }
        
    
}
