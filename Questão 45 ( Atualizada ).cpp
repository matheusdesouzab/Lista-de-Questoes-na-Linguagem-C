//(45)Armazenar 15 números inteiros em um vetor NUM e imprimir uma listagem contendo o número e uma das mensagens: par ou ímpar. 
#include<stdio.h>
int main(){
int num[145],i;
for(i=0;i<=10;i++){
printf("Numero %d: ",i+1); 
scanf("%d",&num[i]); 
} 
for(i=0;i<=10;i++){
if (num[i]%2 == 0){
printf("\nPAR\n"); 
}else{
printf("\nIMPAR\n"); 
}}
return 0; 
}
