package domain;

public class Cartao implements CartaoDeCredito {



    public void saque(Conta conta, double valor) {
        double novoValor = 0;
        if (conta.getSaldo() > valor){
            novoValor = conta.getSaldo() - valor;
            conta.setSaldo(novoValor);
            System.out.println("Saque Realizado! Seu novo saldo é: R$ "+ conta.getSaldo());
        }else{
            System.out.println("Saldo Insuficiente! Seu saldo é: R$ "+ conta.getSaldo());
        }
           
    }

    public void deposito(Conta conta, double valor) {
        double novoValor = 0;
        novoValor = conta.getSaldo() + valor;
        conta.setSaldo(novoValor);
        System.out.println("Deposito Realizado! Seu novo saldo é: R$ "+ conta.getSaldo());
           
    }

    @Override
    public void pagamentoAPrazo(double valor) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'pagamentoAPrazo'");
    }
    
}
