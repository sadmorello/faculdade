#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

// Esta programa foi desenvolvido e testado no Replit.

typedef struct lista {
  int    codigo;
  double preco;
  int    qtde;
  struct lista *prox;
} no;

int verificaVazio(no *le) {
  return le->prox == NULL;
}

void inserir(no *p)
{
  no *novo;
  novo = malloc(sizeof(no));
  
  printf("Qual o código do Produto?\n");
  scanf("%d", &novo->codigo);
  printf("Qual o preço do Produto?\n");
  scanf("%lf", &novo->preco);
  printf("Qual a quantidade do Produto?\n");
  scanf("%d", &novo->qtde);  

  while(p->prox != NULL){    
    p = p->prox;
  }

  p->prox = novo;
  system("clear");
  printf("Registro incluido com sucesso!\n");
}

void imprimir(no *le)
{
  no *p;

  if(!verificaVazio(le)) {
    le = le->prox;
    for(p = le; p != NULL; p = p->prox) {
      printf("=================\n");
      printf("Código: %d \nPreço: %.2f\nQuantidade: %d\n", p->codigo, p->preco, p->qtde);
      printf("=================\n");
    }    
  } else {
    printf("Lista Vazia!\n");
  }
}

void excluir(no *p)
{
  no *lixo;
  no *anterior;
  int cod;
  int status = 0;

  if(!verificaVazio(p)) {    

    printf("Qual o codigo a ser excluido?\n");
    scanf("%d", &cod);

    system("clear");
    
    for(lixo = p; lixo != NULL; lixo = lixo->prox) {     
      
      if(lixo->codigo == cod) {
        anterior->prox = lixo->prox;
        free(lixo);        
        status = 1;
        break;
      } 

      anterior = lixo;

    }
  } else {
    printf("Lista Vazia!\n");
  }
  
  if(status) {
    printf("Registro excluido com sucesso!\n");
  } else {
    printf("Registro não encontrado para exclusão!\n");
  }
}

void procurar(no *le) 
{

  int cod;
  int status = 0;
  no *p ;

  if(!verificaVazio(le)) {

    le = le->prox;

    printf("Qual codigo você deseja buscar?\n");
    scanf("%d", &cod);

    for(p = le; p != NULL; p = p->prox) {  
    
      if(p->codigo == cod) {
        status = 1;
        break;
      }
      
    }

    system("clear");

    if(status) {
      printf("=================\n");
      printf("Código: %d \nPreço: %.2f\nQuantidade: %d\n", p->codigo, p->preco, p->qtde);
      printf("=================\n");      
    } else {
      printf("Registro não encontrado!\n");      
    }
  } else {
    printf("Lista Vazia!\n");
  }
  
}

int main(void) 
{
  no *lista;
  lista = malloc(sizeof(no));  
  lista->prox = NULL;

  int num; 

  int opc;

  do{    
    printf("\nDigite o número da opcao:\n");
    printf("1 - Inserir\n");
    printf("2 - Buscar\n");
    printf("3 - Excluir\n");
    printf("4 - Mostrar Tudo\n");
    printf("5 - Sair\n");
    scanf("%d", &opc);

    int x = 0;

    if(opc == 5) {
      break;
    }

    switch(opc) {
      case 1:
        system("clear");        
        inserir(lista);        
      break;

      case 2:
        system("clear");        
        procurar(lista);
      break;

      case 3:
        system("clear");
        excluir(lista);        
      break;

      case 4:
        system("clear");
        imprimir(lista);        
      break;

      default:
        system("clear");
        printf("Opcao invalida! Tente novamente.");
      break;      
    }

  }while(opc != 5);
  
  return 0;
}