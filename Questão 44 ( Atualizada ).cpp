//(44)Construa um programa que declare e receba um vetor de inteiros com 10 elementos com n�meros fornecidos pelo usu�rio, atrav�s da entrada padr�o e depois exiba os �ndices e seus valores armazenados
#include<stdio.h>
int main(){
int v[10],i;
for(i=0;i<10;i++){
printf("Vetor %d: ",i+1); 
scanf("%d",&v[i]);
}
printf("\n");
for(i=0;i<10;i++){
printf("Vetor %d ==> %d\n",i,v[i]);
}
return 0;
}
