//(47)  Criar um algoritmo que, dados dois vetores de 10 posições cada, efetue as operações aritméticas básicas, indicadas por um terceiro vetor cujos dados também são fornecidos pelo usuário, gerando e imprimindo um quarto vetor. 
 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Portuguese");
system("color 1F");
float A[10] , B[10] , C[10] ,j=0;
int  i ;
char op;
printf("\n");
printf(" (+) Vetor [A] + Vetor [B]\n (-) Vetor [A] - Vetor [B]\n (*) Vetor [A] X Vetor [B]\n (/) Vetor [A] / Vetor [B]\n");
scanf("%c",&op);
if(op=='+'){
	for(i = 0; i < 10; i++)
	{
		printf("Vetor A [%d]:",i);
		scanf("%f", &A[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		printf("Vetor B [%d]:",i);
		scanf("%f", &B[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		C[i]=A[i]+B[i];
		printf("Vetor C [%d] = Vetor A [%d] + Vetor B [%d] = (%.2f)\n",i,i,i,C[i]);
	}}
	if(op=='-'){
	for(i = 0; i < 10; i++)
	{
		printf("Vetor A [%d]:",i);
		scanf("%f", &A[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		printf("Vetor B [%d]:",i);
		scanf("%f", &B[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		C[i]=A[i]-B[i];
		printf("Vetor C [%d] = Vetor A [%d] - Vetor B [%d] = (%.2f)\n",i,i,i,C[i]);
	}}
	if(op=='*'){
	for(i = 0; i < 10; i++)
	{
		printf("Vetor A [%d]:",i);
		scanf("%f", &A[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		printf("Vetor B [%d]:",i);
		scanf("%f", &B[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		C[i]=A[i]*B[i];
		printf("Vetor C [%d] = Vetor A [%d] X Vetor B [%d] = (%.2f)\n",i,i,i,C[i]);
	}}
	if(op=='/'){
	for(i = 0; i < 10; i++)
	{
		printf("Vetor A [%d]:",i);
		scanf("%f", &A[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		printf("Vetor B [%d]:",i);
		scanf("%f", &B[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++)
	{
		C[i]=A[i]/B[i];
		printf("Vetor C [%d] = Vetor A [%d] / Vetor B [%d] = (%.2f)\n",i,i,i,C[i]);
	}}
	
return 0;
}
	
