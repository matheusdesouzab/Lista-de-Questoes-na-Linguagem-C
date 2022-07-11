//(3) 	Faça	um	algoritmo	que	leia	um	vetor	contendo	10	números,	que	correspondem	a	matrículas	de	alunos e	
//Ler	3	matrículas	e	imprima	uma	mensagem	informando	se	eles	estão	ou	não	presentes	no	vetor.
#include<stdio.h>
#include<stdlib.h>
int main(){
 	int vetor[10],i, num,novo = 0,cont;
	for(i=0; i <10; i++){ 
	    printf("Matricula (%d):",i);
		scanf("%d",&vetor[i]);
}
	for(cont=0; cont <3; cont++){ 
	scanf("%d",&num);
		for(i=0; i<10; i++){ 
			if (num==vetor[i]){
				printf("A matricula %d esta presente no vetores acima!\n",num);
				novo++;
}}
			if(novo==0){
				printf("A matricula %d nao esta presente no Vetores acima!\n",num);
			}
	novo= 0;
	}
	return 0;
}
