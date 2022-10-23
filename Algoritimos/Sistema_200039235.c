#include <stdio.h>
#include <locale.h>

struct registro
{
	char tipo[7];
	char titulo[50];
	char edicao[30];
	char autor[30];
	char editora[30];
	int isbn;
	int qtdeExemplares;	
	int ano;
};

int opcao, x, caixa;

int main()
{
	struct registro caixa_1[10];
	struct registro caixa_2[10];
	struct registro caixa_3[10];
	setlocale(LC_ALL, "");
	x = 1;
	//opcao = 0;
	
	while(opcao != 5)
	{				
		printf("Seja Bem-Vindo!! \n");
		printf("-------------------------------------------- \n");
		printf("Escolha uma das opções abaixo \n");
		printf("1 - incluir registro de livro \n");
		printf("2 - Listar todos os livros \n");
		printf("3 - Listar todas as revistas \n");
		printf("4 - Listar obras por caixa \n");
		printf("5 - Sair \n");
		printf("-------------------------------------------- \n");
		scanf("%i", &opcao);
	
		while (opcao < 1 || opcao > 5)
		{
			printf("Opção inválida!! Tente novamente:");
			scanf("%i", &opcao);
		}
	
		switch(opcao)
		{
			case 1:	
				if(caixa > 10)
				{
					printf("");
				}
				else					
				{
					printf("Em qual caixa 1, 2 ou 3?\n");
					scanf("%d", &caixa);
					printf("O que deseja guardar?\n");
					scanf("%s", &res[x][caixa].tipo );					
					printf("Qual o título da obra?\n");
					scanf("%s", &res[x][caixa].titulo);
					printf("Qual a edição?\n");
					scanf("%s", &res[x][caixa].edicao);
					printf("Qual é o nome do autor?\n");
					scanf("%s", &res[x][caixa].autor);
					printf("Qual é a editora?\n");
					scanf("%s", &res[x][caixa].editora);
					printf("Qual é o isbn?\n");
					scanf("%d", &res[x][caixa].isbn);
					printf("Qual a quantidade de exemplares?\n");
					scanf("%d", &res[x][caixa].qtdeExemplares);
					printf("Qual o ano?\n");
					scanf("%d", &res[x][caixa].ano);
					x = x + 1;
				}
			break;
			case 2:
			printf("Listar todos os livros()");
			break;
			case 3:
			printf("Listar todas as revistas()");
			break;
			case 4:
			printf("Listar obras por caixa()");
			break;
			default:
			break;
		}
	}
	return 0;
}
