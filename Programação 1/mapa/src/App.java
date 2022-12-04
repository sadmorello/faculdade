import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int matricula;
        String nome;
        float[] notas = new float[3];
        float presencas;

        try (Scanner sc = new Scanner(System.in)) {
            System.out.printf("Digite a Matricula do Aluno: ");
            matricula = sc.nextInt();
            sc.nextLine();
            System.out.printf("Digite o Nome do Aluno: ");
            nome = sc.nextLine();

            for (int i = 0; i < 3; i++) {
                System.out.printf("Digite a nota do trimestre %d: ", i + 1);
                notas[i] = sc.nextFloat();
            }

            System.out.printf("Digite a quantidade de Presenças: ");
            presencas = sc.nextFloat();
        }
        System.out.println("\n************ Resultado ************ \n");
        System.out.printf("Aluno: %s \n", nome);
        System.out.printf("Média: %.2f \n", calculaMedia(notas));
        System.out.printf("Presenças: %.1f%% \n", percentualPresenca(presencas));
    }

    public static float calculaMedia(float[] notas) {
        return (notas[0] + notas[1] + notas[2]) / 3;
    }

    public static float percentualPresenca(float presencas) {
        return (presencas / 60) * 100;
    }
}
