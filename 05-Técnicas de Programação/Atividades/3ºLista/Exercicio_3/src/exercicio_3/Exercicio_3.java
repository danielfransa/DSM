package exercicio_3;

public class Exercicio_3 {

    public static void main(String[] args) {
               
        Cachorro c = new Cachorro(4);
        
        c.comer();
        System.out.println(" ");
        c.mover();
        System.out.println(" ");
        c.imprimir();
        
        
        System.out.println("----------------------------");
        
        Ave a = new Ave(2);
                       
        a.comer();
        System.out.println(" ");
        a.mover();
        System.out.println(" ");
        a.imprimir();
       
    }
    
}
