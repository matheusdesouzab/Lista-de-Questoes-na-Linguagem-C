//(49) Entrar com v�rios n�meros, at� digitar o n�mero 0. Imprimir quantos n�meros iguais ao �ltimo n�mero foram lidos. O limite de n�meros � 100. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,num,ultimo,u[100],cult=1;
    printf("Informe Numero (%d): ",i);
        scanf("%d",&num);
        while(i<100 && num!=0){
        printf("Informe Numero (%d): ",i+1);
        scanf("%d",&num);
        if(num!=0){
            u[i]=num;
            ultimo=num;
            }
        i++;    
        }
    for(i=0 ; i<u[i] ; i++){
    if(u[i]==ultimo){
        cult++;
        }}
    printf("O ultimo numero apareceu %d Vezes!\n",cult);
    return 0;
    }
