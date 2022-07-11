//(33) Receber um nome e imprimir as 4 primeiras letras do nome. 
#include<stdlib.h>
#include<stdio.h>
int main(){
  int i;  
  char nome[20]; 
  printf("Informe um nome: ");
  gets(nome);
  for (i = 0; i < nome[i]; i++) {
    if (i < 4) {
      printf("%c",nome[i]);
  }}
return 0;
}
