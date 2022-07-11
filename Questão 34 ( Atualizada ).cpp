//(34) Receber um nome e imprimir as letras na posição impar 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int cont=1 , i , tam;
	char nome[20];
	printf("Informe seu Nome:");
	gets(nome);
	tam=strlen(nome);
	printf("\n");
	printf("Letras Impares\n");
	printf("\n");
	while(cont<=tam-1){
		printf("(%d)==>(%c)\n",cont,nome[cont]);
		cont=cont+2;
	}
	return 0;
}
	




