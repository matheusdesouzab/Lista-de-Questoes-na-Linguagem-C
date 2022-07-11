//(36) Receber um nome no teclado e imprimir quantas letras "A" tem o nome
#include <stdio.h>
#include <string.h>
int main(){
char palavra[20];
int contador, numVogais = 0;
scanf("%s",palavra);
for(contador=0; contador < palavra[contador]; contador++){
if (palavra[contador]== 'a' || palavra[contador]== 'A'){
numVogais++;
}}
printf("%d A\n",numVogais);
return 0;
}
