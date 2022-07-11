//(14)Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral. 
#include <stdio.h> 
#include <stdlib.h> 
int main() {
float v[15] , soma=0 , media;
int i ;
for(i=0 ; i<15 ; i++){
	printf("Nota (%d):",i);
	scanf("%f",&v[i]);
	soma=soma+v[i];
	media=soma/15;
}
printf("Media Geral = (%.2f)\n",media);
return 0;
}
