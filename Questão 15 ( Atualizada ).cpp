//(15)Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre a quantidade de n�meros negativos e a soma dos n�meros positivos desse vetor.   
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
	

