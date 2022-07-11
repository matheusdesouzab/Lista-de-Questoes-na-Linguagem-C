//(19)Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 * i) % (i+ 1), sendo i a posição do elemento no vetor. Em seguida imprima o vetor na tela. 
#include <stdio.h>
int main() {
  int A[50], i;
  for(i=0; i<50; i++){
    printf("Vetor [%d]: %d\n", i, (i+5*i)%(i+1));
  }
  return 0;
}
