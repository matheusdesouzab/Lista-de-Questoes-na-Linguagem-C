//Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos. 
#include <stdio.h>
#include <stdlib.h>
int main() {
	int v[10] , i ;
	for(i=1 ; i<=10 ; i++){
	printf("Vetor (%d):",i);
	scanf("%d",&v[i]);
	if(v[i]<0){
		v[i]=0;
	}}
	printf("\n");
	printf("Vetor Modificado\n");
	printf("\n");
	for(i=1 ; i<=10 ; i++){
		printf("Vetor (%d) ==> (%d)\n",i,v[i]);
	}
		return 0;
	}
