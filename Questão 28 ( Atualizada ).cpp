//(28) Faça um algoritmo que leia 30 valores do tipo inteiro e armazene-os em um vetor. A seguir, o algoritmo deverá informar: 
//todos os números pares que existem no vetor; 
//o menor e o maior valor existente no vetor;
// quantos dos valores do vetor são maiores que a média desses valores: 
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i , v[30] , par=0 , vpar[30] , menor=0 , maior=0 , soma=0 , mer[10],ui=0;
	float media;
	for(i=0 ; i<5 ; i++){
		printf("Valor (%d): ",i);
		scanf("%d",&v[i]);
		soma=soma+v[i];
		media=soma/5;
	if(i==0){
		maior=v[i];
		menor=v[i];
	}
	if(v[i]>maior){
		maior=v[i];
	}else{
		if(v[i]<menor){
			menor=v[i];
}}
if(v[i]%2==0){
	vpar[par]=v[i];
	par++;
}else{
	if(v[i]>media){
		mer[ui]=v[i];
		ui++;
	}}
}
    printf("\n\nNumeros Pares do Vetor\n\n");
	for(i=0 ; i<par ; i++){
		printf("(%d)\n",vpar[i]);
	}
	printf("\nMaior Valor %d\n",maior);
	printf("\nMenor Valor %d\n",menor);
	printf("\n\nNumeros Maiores que Media\n\n");
	for(i=0 ; i<ui ; i++){
		printf("(%d)\n",mer[i]);
	}
	return 0;
}
		

	
