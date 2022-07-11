//(25) Faça um programa em Pascal que receba o total das vendas de cada vendedor e armazene-as em um vetor. Receba também o percentual de comissão de cada vendedor e armazene-os em outro vetor. 
// Um relatório com os códigos dos vendedores e os valores a receber
//O total das vendas de todos os vendedores
//O maior valor a receber e quem o receberá; 
//O menor valor a receber e quem o receberá
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char nome[4][24];
	int i ,ps1=0,ps2=0;
	float salario[4],maior=0,menor=0,por[4],total[4];
	for(i=0 ; i<2 ; i++){
		printf("Cliente : ");
		scanf("%s",&nome[i]);
		printf("Salario do Cliente %s: ",nome[i]);
		scanf("%f",&salario[i]);
		printf("Comissao do Cliente %s: ",nome[i]);
		scanf("%f",&por[i]);
		printf("\n");
		if(i==0){
			maior=salario[i];
			menor=salario[i];
		}
	if(salario[i]>maior){
		maior=salario[i];
		ps1=i;
	}else{
		if(salario[i]<menor){
			menor=salario[i];
			ps2=i;
		}}
	}
	    printf("\n\nSalarios Atualizados\n\n");
		for(i=0 ; i<2 ; i++){
		total[i]=(salario[i])*(por[i]/100)	+ (salario[i]);
		printf("Cliente %s recebera %.2f\n",nome[i],total[i]);
	}	
	for(i=0 ; i<2 ; i++){
	if(ps1==i){	
	printf("\nO maior Salario e do Cliente %s , sendo um total de %.2f reais\n",nome[i],maior);	
}}
    for(i=0 ; i<2 ; i++){
	if(ps2==i){	
	printf("\nO menor Salario e do Cliente %s , sendo um total de %.2f reais\n",nome[i],menor);	
}}
	return 0;
}
