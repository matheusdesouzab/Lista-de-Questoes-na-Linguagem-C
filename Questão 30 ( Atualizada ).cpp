//(30)Crie um algoritmo para ler 15 números inteiros e mostrar no final, os que forem maiores ou igual a 10; 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int maiorv[10] , v[10] , i ,maior=0;
	for(i=0 ; i<10 ; i++){
		printf("Vetor (%d):",i);
		scanf("%d",&v[i]);
	if(v[i]>=10){
		maiorv[maior]=v[i];
		maior++;
	}}
	printf("\n");
	printf("Numeros Maiores ou Iguais a 10!\n");
	printf("\n");
	for(i=0 ; i<maior ; i++){
		printf("%d\n",maiorv[i]);
	}
	return 0;
}
	
