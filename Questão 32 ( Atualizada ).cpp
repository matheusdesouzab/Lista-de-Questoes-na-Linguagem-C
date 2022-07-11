//(32)Criar um programa em C que, dado um vetor de 5 elementos do tipo inteiro, crie um outro que seja o inverso do primeiro e apresente os dois vetores para o usuário
#include<stdio.h>
#include <stdlib.h>
int main(){
 int i, v[10],j,t[10];
 for(i=0;i<10;i++){
 printf("Vetor [%d]= ",i);
 scanf("%d",&v[i]);
}
j=9;
for(i=9;i>=0;i--){
t[j]=v[i];
j--;
printf("(%d)\n",t[i]);
}
return 0;
}
