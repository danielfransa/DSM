
package exercicio_3;

public class Cachorro extends Animal {

    public Cachorro(int patas) {
        super(patas);
    }

    @Override
    public void comer() {
        System.out.println("O cachorro esta:");
        super.comer();
    }

    @Override
    public void mover() {
        System.out.println("O cachorro esta:");
        super.mover();
    }

    @Override
    public void imprimir() {
        System.out.println("O cachorro tem:");
        super.imprimir();
    }
    
    
  
    
    
}
