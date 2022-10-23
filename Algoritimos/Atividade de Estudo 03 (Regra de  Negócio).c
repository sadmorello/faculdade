#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float valorFabrica, valorImposto, valorDistribuidor, custoConsumidor;
float perImposto, perDistribuidor;


int main()
{	
	setlocale(LC_ALL, "");
	
	perImposto = 45;
	perDistribuidor = 28;	
	
	printf("==== Descobrindo o valor da venda ao consumidor final ====\n");
	
	printf("\nDigite o valor de Fábrica: ");	
	scanf("%f", &valorFabrica);	
	
	valorImposto = valorFabrica * (perImposto/100);
	valorDistribuidor = valorFabrica * (perDistribuidor/100);
	custoConsumidor = valorFabrica + valorImposto + valorDistribuidor;
	
	printf("\n ============================================================\n");
	printf("\n O custo ao Consumidor é de R$ %0.2f", custoConsumidor);	
	
	return(0);
}
