//(22) Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa devera escrever a soma dos valores encontrados nas respectivas posições  X e Y. 
#include<stdio.h> 
#include<stdlib.h> 
int main() { 
int x, y,vetor[8],i; 
float z=0;
for (i = 0; i < 8; i++) { 
printf ("Vetor (%d):",i); 
scanf ("%d", &vetor[i]); 
} 
printf("\n");
printf("Digite a Primeira Posicao:"); 
scanf("%d", &x); 
printf("\n");
printf("Digite a Segunda Posicao: "); 
scanf("%d", &y);  
z = (vetor[x] + vetor[y]); 
printf("\n");
printf("Soma = %.2f\n",z); 
return 0; 
}
