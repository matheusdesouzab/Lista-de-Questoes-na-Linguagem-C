//(45)Armazenar 15 n�meros inteiros em um vetor NUM e imprimir uma listagem contendo o n�mero e uma das mensagens: par ou �mpar. 
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
