//(9) O programa solicita a digita��o de 20 n�meros inteiros e armazena-os em um vetor. Ap�s a digita��o, exibir em uma linha os cinco primeiros valores e em outra linha os cinco �ltimos valores
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, v[10];
    for (i=0;i<10;i++){
      printf("Valor (%d):",i);
      scanf("%d", &v[i]);
  }
  printf("\n");
printf("Cinco Primeiros Numeros:\n");
printf("\n");
  for(i=0 ; i<5 ; i++){
  	printf("Valor (%d)\n",v[i]);
  }
  printf("\n");
  printf("Cinco Ultimos Numeros:\n");
  printf("\n");
  for(i=5 ; i<10 ; i++){
  	printf("Valor (%d)\n",v[i]);
  }}
