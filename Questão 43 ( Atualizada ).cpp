//(43) Fa�a um programa que exibe o conte�do de um vetor tamanho 10 de forma invertida, os dados s�o lidos do teclado. 
#include <stdio.h>
int main (){
	int vet [10],i;
	for ( i = 0; i < 10; i++){
		printf("Vetor %d : ",i);
		scanf("%d",&vet[i] );
	}
	for ( i = 9; i >= 0; i--)
	printf("%d\n", vet[i]);
    return 0;
}
