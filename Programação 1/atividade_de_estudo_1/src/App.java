import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite o valor do Salário Bruto:");
        float salario_bruto = scanner.nextFloat();

        System.out.println("Digite o percentual de Desconto:");
        float desconto = scanner.nextFloat();

        scanner.close();

        float[] resumo = resumoFolha(salario_bruto, desconto);

        System.out.println("======= Resumo Salário =======\n");
        System.out.printf("Salário Bruto: %.2f \n", resumo[0]);
        System.out.printf("Valor do Desconto: %.2f \n", resumo[1]);
        System.out.printf("Salário Líquido: %.2f \n", resumo[2]);
    }

    public static float[] resumoFolha(float salario, float desconto) {
        /*
         * 0 - Salário bruto do funcionário.
         * 1 - Valor do desconto.
         * 2 - Salário líquido.
         */

        float[] resumo = new float[3];

        resumo[0] = salario;
        resumo[1] = salario * (desconto / 100);
        resumo[2] = resumo[0] - resumo[1];

        return resumo;
    }
}
