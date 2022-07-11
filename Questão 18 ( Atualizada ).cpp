//(18) Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,v[10],par=0,vetPar[10],tamPar=0;
    for (i=0;i<10;i++){
      printf("Valor (%d):",i);
      scanf("%d", &v[i]);
      if (v[i] % 2 == 0) {
            vetPar[tamPar] = v[i];
            tamPar++;
	  }}
	printf("\n");
    printf("Pares Totais %d\n",tamPar);
    printf("\n");
	printf("No Quais Sao:\n");
	
    for (i = 0; i < tamPar; i++) {
        printf("(%d)\n", vetPar[i]);
    }
    return 0;
}
    
