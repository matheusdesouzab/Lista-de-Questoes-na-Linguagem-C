// Fazer um programa em C para ler um vetor de inteiros positivos de 50 posições. Imprimir a quantidade de números pares e de múltiplos de 5. 
#include<stdio.h>
#include<stdlib.h>
int main(){
int pares=0 , i , a[5] , cinco=0 ;
for(i=0 ; i<5 ; i++){
printf("Valor (%d):",i);
scanf("%d",&a[i]);
if(a[i]%2==0){
	pares=pares+1;
	if(a[i]%5==0){
		cinco=cinco+1;
	}
}}
	printf("Total Pares:%d\n",pares);
	printf("Total Multiplos de 5:%d\n",cinco);
return 0;
}



