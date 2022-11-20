import java.util.Scanner;

public class App {
    public static final float valor_dependente = 134.98F;

    public static void main(String[] args) throws Exception {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Informe o salário:");
            float salario = scanner.nextFloat();
            System.out.println("Informe a quantidade de dependentes");
            int dependentes = scanner.nextInt();

            System.out.printf("Resultado o salário %.2f \n", salario);
            System.out.printf("Quantidade de dependentes: %d \n", dependentes);
            System.out.printf("Total do salário família: %.2f \n", adicionalDependetes(dependentes, salario));
            System.out.printf("Salário final: %.2f \n", salario + adicionalDependetes(dependentes, salario));
        }
    }

    public static float adicionalDependetes(int dependentes, float salario) {
        float valor_familia = (dependentes * valor_dependente) + (salario * (dependentes * 3) % 100);

        return valor_familia;
    }
}
