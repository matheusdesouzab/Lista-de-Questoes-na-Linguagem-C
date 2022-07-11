//(20) Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um vetor com 10 posições. Preencha um segundo vetor apenas com os números ímpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha. 
#include <stdio.h>
int main() {
  int A[10],B[50], i,j=0;
  for(i=0; i<50; i++){
  if(i%2!=0){
  	B[j]=i;
  	j++;
  }}
  for(i=0; i<j; i++){
  A[i]=i;
  printf("(%d)\n",A[i]);	
  printf("(%d)\n",B[i]);
}
  return 0;
}
