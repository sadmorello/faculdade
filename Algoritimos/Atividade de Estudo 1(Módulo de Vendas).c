//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define num_lanche1 1
#define num_lanche2 2
	
int main()
{
	//Fun��o para corre��o dos caracteres
	setlocale(LC_ALL, "");
	
	//Vari�veis	
	int num_digitado;
	char nome_lanche1[10]= "X-Bacon", nome_lanche2[10]= "X-Salada";
	float valor_lanche1 = 18.00, valor_lanche2 = 15.00;
	
	
	printf("Menu: \n %d - %s \n %d - %s \n", num_lanche1, nome_lanche1, num_lanche2, nome_lanche2);	//Mostra menu
	printf("Escolha seu lanche digitando seu respectivo n�mero:\n");								//Pegunta o lanche escolhido
	scanf("%d", &num_digitado);																		//Armazena o que foi digitado

	//Verfica se o lanche escolhido existe
	while(num_digitado != num_lanche1 && num_digitado != num_lanche2)				
	{
		printf("Ocorreu um Erro! O n�mero do lanche escolhido n�o existe \n");
		printf("Tente novamente: \n");
		scanf("%d", &num_digitado);
	}
		
	//Mostra o valor do lanche baseado no que foi escolhido
	if(num_digitado == num_lanche1)
	{
		printf("Valor: \n %s - Pre�o: R$ %.2f \n", nome_lanche1, valor_lanche1);
	}
	else
	{
		printf("Valor: \n %s - Pre�o: R$ %.2f \n", nome_lanche2, valor_lanche2);
	}
	
	//Pausa o sistema
	system("pause");
	
	return 0;
}
