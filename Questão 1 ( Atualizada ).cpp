//(1) Faça	um	algoritmo	que	receba	um	vetor	inteiro	de	10	posições	e	imprima-o	na	ordem	inversa	à	da	leitura.		
#include<stdio.h>
#include<stdlib.h>
int main(){
	bool t=true;	
int n;
printf("Informe Numero: ");
scanf("%d",&n);
if(n%2==0){
	printf("Par");
}else{
	printf("Impar");
}
return 0;
}


