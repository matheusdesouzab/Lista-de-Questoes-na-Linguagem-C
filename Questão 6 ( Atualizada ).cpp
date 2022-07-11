//(6) Durante	uma	corrida	de	automóveis	com	6	voltas	de	duração	foram	anotados	para	um	piloto,	na	ordem,	os	tempos	registrados	em	cada	volta.	Fazer	um	programa	em	C	para	ler	os	tempos	das	6	voltas,	calcular	e	imprimir:	•
// Melhor tempo;
// A volta	em	que	o	melhor	tempo	ocorreu;
// Tempo médio	das	6	voltas;
#include <stdio.h> 
#include <stdlib.h> 
int main(){
float tmedio,melhorvolta; 
int tempo[6],st=0,m;  
for(int i=0;i<6;i++){
printf("Volta %d : ",i);
scanf("%d",&tempo[i]); 
if(i==0){
			melhorvolta=tempo[i];
		}
		if(tempo[i]<melhorvolta){
			melhorvolta=tempo[i];
			m=i;
		}
		st=st+tempo[i];
	}
	tmedio=st/6; 
printf("\nO melhor tempo foi %.2f",melhorvolta); 
printf("\nA volta que ocorreu o melhor tempo foi %d volta! ",m); 
printf("\nTempo medio das 6 voltas: %.2f!",tmedio);
return 0;
}
