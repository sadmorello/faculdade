#include <stdio.h>

int aOrd[20] = {6,58,16,90,85,3,2,62,57,1,46,60,4,8,49,63,1,55,17,68};

void ver(int a[]) {  
  int tam = sizeof(aOrd)/ sizeof(aOrd[0]);
  for(int x = 0; x < tam; x++) {
    printf("%d ", a[x]);
  }
}

void bubbleSort(int a[]) {
  int tam = sizeof(aOrd) / sizeof(aOrd[0]);
  int tmp;

  for(int x = 0; x < tam; x++) {    
    for (int y = x+1; y < tam; y++) {
      if(aOrd[x] > aOrd[y]) {
        tmp = aOrd[x];
        aOrd[x]  = aOrd[y];
        aOrd[y] = tmp;
      }
        printf("\n ============ \n");
        ver(aOrd);
    }
  }
}

int main(void) { 

  ver(aOrd);  
  bubbleSort(aOrd);
  printf("\n ============ \n");
  ver(aOrd);

}