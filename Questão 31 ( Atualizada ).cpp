//(31)  Escreva um programa que leia e imprima os números de um vetor V[30] com uma condição: apenas os valores maiores ou iguais a 7.0 e menores que 4.0 devem ser impressos. 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i  , quarto=0 , sete=0 ;
	float v[30] , v7[30] , v4[30];
	for(i=0 ; i<10 ; i++){
		printf("Valor (%d) : ",i);
		scanf("%f",&v[i]);
	if(v[i]>=7){
		v7[sete]=v[i];
		sete++;
	}else{
	if(v[i]<4){
		v4[quarto]=v[i];
		quarto++;	
	}
}}
printf("\n\nValores Maiores ou Iguais a 7\n\n");
for(i=0 ; i<sete ; i++){
	printf("%.2f\n",v7[i]);
}
printf("\n\nValores Menores que 4\n\n");
for(i=0 ; i<quarto ; i++){
	printf("%.2f\n",v4[i]);
}
return 0;
}


