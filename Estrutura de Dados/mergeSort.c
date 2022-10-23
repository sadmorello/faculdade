#include <stdio.h>
#include <stdlib.h>

int barraca[8] = {2, 0, 0, 0, 3, 9, 2, 3};

void merge(int *vet, int *x, int ini, int meio, int fim);
void sort(int *vet, int *x, int ini, int fim);
void mergesort(int *vet, int tam);
void show(int vet[], int tam);

int main (void) {
  
  show(barraca, 8);
  mergesort(barraca, 8);  
  show(barraca, 8);

  return 0;
}

void show(int vet[], int tam) {
  for (int i = 0; i < tam; i++) printf("%d ", vet[i]);
  printf("\n");
}

void mergesort(int *vet, int tam) {
  int *x = malloc(sizeof(int) * tam);
  sort(vet, x, 0, tam - 1);
  free(x);
}

void sort(int *vet, int *x, int ini, int fim) {
  if (ini >= fim) return;

  int meio = (ini + fim) / 2;

  sort(vet, x, ini, meio);
  sort(vet, x, meio + 1, fim);
 
  if (vet[meio] <= vet[meio + 1]) return;

  merge(vet, x, ini, meio, fim);
}

void merge(int *vet, int *x, int ini, int meio, int fim) {
  int z, ivet = ini, ime = meio + 1;

  for (z = ini; z <= fim; z++) x[z] = vet[z];

  z = ini;

  while (ivet <= meio && ime <= fim) {
    if (x[ivet] <= x[ime]) vet[z++] = x[ivet++];
    else vet[z++] = x[ime++];
  }

  while (ivet <= meio) vet[z++] = x[ivet++];
  while (ime <= fim) vet[z++] = x[ime++];
}