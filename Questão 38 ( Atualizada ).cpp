//(38) Escrever um programa que receba um nome  
//Que conte o número de vogais existentes nele. 
//O programa deverá imprimir o numero total de caracteres do nome  
//Quantas vogais   
//E a respectiva porcentagem das vogais em relação ao total de caracteres
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>	
int main (){
setlocale(LC_ALL,"Portuguese");	
char nome[100] , vvog[100];
int tamanho,cont,vogais=0,consoantes=0,i;
float pvogais=0 , pconsoantes=0;
printf("Informe Nome: ");
gets(nome);
tamanho=strlen(nome);
for(i=0 ; i<nome[i] ; i++){
	if(nome[i]=='a'|| nome[i]== 'e'  || nome[i]== 'i' || nome[i]== 'o' || nome[i]== 'u'||nome[i]== 'A' || nome[i]== 'E'  || nome[i]== 'I' || nome[i]== 'O' || nome[i]== 'U'){
		vogais++;
	}else{
		consoantes++;
	}}
printf("\n");	
printf("O Nome %s Possui %d de Vogais",nome,vogais);
printf("\n");
printf("O Nome %s Possui %d de Consoantes",nome,consoantes);
pvogais=vogais*100/tamanho;
pconsoantes=100-pvogais;
printf("\n");
printf("O Nome %s Possui %.2f Porcento de Vogais\n",nome,pvogais);
printf("O Nome %s Possui %.2f Porcento de Consoantes\n",nome,pconsoantes);
printf("O Nome %s Possui %d Letras\n",nome,tamanho);
return 0;
}

