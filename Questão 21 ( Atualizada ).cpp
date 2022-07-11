//(21)  Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas posições pares os valores do primeiro e nas posições impares os valores do segundo
#include <stdio.h> 
int main() { 
int a[5], b[5], c[5]; 
int i; 
for (i=0; i<5; i++) { 
printf("Informe Vetor A [%d]: ", i); 
scanf("%d", &a[i]); 
} 
for (i=0; i<5; i++) { 
printf("Informe Vetor B [%d]: ", i); 
scanf("%d", &b[i]); 
} 
for (i=0; i<5; i++) 
if (i % 2 == 0) 
c[i] = a[i]; 
else 
c[i] = b[i]; 
for (i=0; i<5; i++) 
printf("Vetor C [%d] = %d\n", i, c[i]); 
return 0; 
}
