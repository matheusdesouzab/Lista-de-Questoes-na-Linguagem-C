//(35) Receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem. Considerar minúscula e maiúscula. 
#include <stdio.h>
#include <string.h>
int main(){
char palavra[20];
int contador, numVogais = 0,a=0,e=0,u=0,o=0,i=0;
printf("Informe Nome: ");
scanf("%s",palavra);
for(contador=0; contador < palavra[contador]; contador++){
if (palavra[contador]== 'a' || palavra[contador]== 'A'){
a++;
}else{
if (palavra[contador]== 'e' || palavra[contador]== 'E'){
e++;
}else{
if (palavra[contador]== 'i' || palavra[contador]== 'I'){	
i++;
}else{
if (palavra[contador]== 'o' || palavra[contador]== 'O'){	
o++;
}else{
if (palavra[contador]== 'u' || palavra[contador]== 'U'){	
u++;
}}}}}}
printf("Total de Vogais A %d\n",a);
printf("Total de Vogais E %d\n",e);
printf("Total de Vogais I %d\n",i);
printf("Total de Vogais O %d\n",o);
printf("Total de Vogais U %d\n",u);
return 0;
}
