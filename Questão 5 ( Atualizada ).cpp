//(5) 5.	Faça	um	algoritmo	que	leia	um	vetor	de	5	posições,	e	preencha	um	segundo	vetor,	sendo	que	cada	posição	do	segundo	vetor	receberá	o	valor	do	primeiro	vetor	na	mesma	posição	multiplicado	pelo	maior	valor	dentro	do	primeiro	vetor.	
#include<stdio.h>
#include<stdlib.h>
int main(){
	int v[5] , t[5] ,i,maior=0;
	for(i=0 ; i<=4 ; i++){
		printf("Vetor [%d]:",i);
		scanf("%d",&v[i]);
		if(v[i]>maior){
			maior=v[i];
		}}
		printf("\n");
		printf("%d Maior Numero\n",maior);
		printf("Assim Vetor A sera multplicado por %d!\n",maior);
		printf("\n");
		for(i=0 ; i<=4 ; i++){
			t[i]=v[i]*maior;
		printf("Vetor B [%d]==>(%d)\n",i,t[i]);	
}
	return 0;
}
		
		
		
