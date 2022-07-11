//(15)Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.   
#include <stdio.h> 
#include <stdlib.h> 
int main() {
	float n[10] , sp=0 ;
	int i ,neg;
	for(i=0 ; i<10 ; i++){
		printf("Valor (%d):",i); 
        scanf("%f",&n[i]); 
        if(n[i]<0){
        	neg++;
        }else{
	if(n[i]>=0){
		sp=sp+n[i];
	}}}
			printf("Soma dos Numeros Positivos (%.2f)\n",sp);
			printf("Quantidade de Numeros Negativos(%d)\n",neg);
	return 0;
}
	

