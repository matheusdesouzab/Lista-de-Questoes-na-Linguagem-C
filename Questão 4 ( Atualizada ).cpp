//(4) 	Faça	um	algoritmo	que	leia	os	valores	de	um	vetor	inteiro	de	tamanho	10,	e	imprima	o	valor	da	soma	dos	números	ímpares	presentes	neste	vetor.		
#include<stdio.h>
#include<stdlib.h>
int main(){
	int v[10],i,total=0;
	for(i=0 ; i<10 ; i++){
		printf("Vetor [%d]:",i);
		scanf("%d",&v[i]);
	if(v[i]%2!=0){
		total=total+v[i];
	}}
	printf("\n");
		printf("Soma Impares: %d\n",total);
	return 0;
}
	
