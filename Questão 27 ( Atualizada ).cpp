//(27)  Faça um algoritmo que receba as notas da primeira prova de 10 alunos e armazene essas notas em um vetor. Receba as notas da segunda prova de 10 alunos e armazene essas em outro vetor. Calcule a média dessas notas e armazene em outro vetor, no final imprima as notas e a média entre essas duas notas de cada aluno. 
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i;
	char nome[10][100];
	float nota1[10] , nota2[10] , soma[i] , media[10];
	for(i=0 ; i<5 ; i++){
		printf("Nome do Aluno %d : ",i+1);
		scanf("%s",&nome[i]);
		printf("Nota 1 do Aluno %s: ",nome[i]);
		scanf("%f",&nota1[i]);
		printf("Nota 2 do Aluno %s: ",nome[i]);
		scanf("%f",&nota2[i]);
		printf("\n");
	}
		for(i=0 ; i<5 ; i++){
			soma[i]=nota1[i]+nota2[i];
			media[i]=soma[i]/2;
			printf("Aluno %s tem a Media de %.2f\n",nome[i],media[i]);
		}
		return 0;
	}
