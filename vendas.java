// Meu primeiro codigo em java!!!!
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float venda1, venda2, venda3;
        float valor_recebido;
        float total;

        // Entrada de dados
        System.out.println("Digite o valor da primeira venda: ");
        venda1 = scanner.nextFloat();
        System.out.println("Digite o valor da segunda venda: ");
        venda2 = scanner.nextFloat();
        System.out.println("Digite o valor da terceira venda: ");
        venda3 = scanner.nextFloat();

        // Cálculo da média
        total = (venda1 + venda2 + venda3) / 3;

        // Condição para verificar se o total está abaixo ou acima da média
        if (total <= 120) {
            valor_recebido = total * 10 / 100;
            System.out.println("Você ficou abaixo da média com: " + total);
            System.out.println("O valor recebido foi: " + valor_recebido);
        } else {
            valor_recebido = total * 20 / 100;
            System.out.println("Você ficou acima da média com: " + total);
            System.out.println("O valor recebido foi: " + valor_recebido);
        }

        // Fecha o scanner
        scanner.close();
    } // Fechamento do método main
} // Fechamento da classe Main
