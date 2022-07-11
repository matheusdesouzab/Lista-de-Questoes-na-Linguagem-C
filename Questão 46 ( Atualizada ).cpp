//(46)Armazenar nomes e notas da prova 1 e prova 2 de 15 alunos. Calcular e armazenar a média. Armazenar também a situação do aluno: A (Aprovado) ou R (Reprovado). Imprimir uma listagem contendo nome, média e situação de cada aluno. 
#include<stdio.h>
int main(){
char nome[6][50];
float nota1[6], nota2[6], media[6];
int i;
for(i=0; i<3; i++){
printf("Nome do Aluno (%d):",i+1);
gets(nome[i]);
printf("Nota da Prova 1 do Aluno %s:",nome[i]);
scanf("%f",&nota1[i]);
getchar();
printf("Nota da Prova 2 do Aluno %s:",nome[i]);
scanf("%f",&nota2[i]);
getchar();
printf("\n");
media[i] = (nota1[i] + nota2[i]) / 2.0;
}
	  for (i=0; i<3; i++){
	  if (media[i]>5){
	  printf("O Aluno %s Foi Aprovado com a media: %.2f\n",nome[i],media[i]);
	  }else{
	  printf("O Aluno %s Foi Reprovado com a media: %.2f\n",nome[i],media[i]);
}}
	  return 0;
}
