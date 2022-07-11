//(26) Faça um algoritmo que receba a nota de 10 alunos e armazene essas notas em um vetor. Calcule e imprima:  • 
// A média da classe
// A quantidade de alunos aprovados, isto é, com média > = 7
// A quantidade de alunos reprovados, isto é, com média < 7. 
#include <stdio.h>
#include <stdlib.h>
int main() {
	float nota[10] , media , soma=0;
	char nome[10][100];
	int i;
	for(i=0 ; i<5 ; i++){
		printf("Nome do Aluno %d : ",i+1);
		scanf("%s",&nome[i]);
		printf("Nota do Aluno %s: ",nome[i]);
		scanf("%f",&nota[i]);
		printf("\n");
		soma=soma+nota[i];
	media=soma/5;
	}
	for(i=0 ; i<5 ; i++){
	if(nota[i]>=7){
		printf("Aluno %s foi aprovado com a Media de %.2f\n",nome[i],nota[i]);
	}else{
	if(nota[i]<7){
		printf("Aluno %s foi reprovado com a Media de %.2f\n",nome[i],nota[i]);
	}}}
	printf("\n");
	printf("Media dos Alunos = %.2f\n",media);
	printf("\n");
	return 0;
}
