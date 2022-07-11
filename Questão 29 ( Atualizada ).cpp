//(29)Crie um algoritmo para ler 10 números inteiros e mostrar os números pares deste vetor; 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int par[10] , v[10] , i ,pare=0;
	for(i=0 ; i<10 ; i++){
		printf("Vetor A (%d):\n",i);
		scanf("%d",&v[i]);
	if(v[i]%2==0){
		par[pare]=v[i];
		pare++;
	}}
	printf("\n");
	printf("Numeros Pares\n");
	printf("\n");
	for(i=0 ; i<pare ; i++){
		printf("%d\n",par[i]);
	}
	return 0;
}
	



