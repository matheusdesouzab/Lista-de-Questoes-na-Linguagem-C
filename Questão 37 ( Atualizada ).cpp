//(37) Receber do teclado a sigla do estado de uma pessoa e imprimir
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char estado[30];
printf("Informe a sigla: ");
scanf("%s",&estado);
if(!strcmp(estado,"MG") || !strcmp(estado,"mg")){
printf("Mineiro\n");
}else{
if(!strcmp(estado,"RJ") || !strcmp(estado,"rj")){
printf("Carioca\n");
}else{
if(!strcmp(estado,"SP") || !strcmp(estado,"sp")){
printf("Paulista\n");
}else{
printf("Outros estados\n");
}}}
printf("\n");
return 0;
}
