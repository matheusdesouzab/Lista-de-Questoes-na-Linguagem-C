//(3) 	Fa�a	um	algoritmo	que	leia	um	vetor	contendo	10	n�meros,	que	correspondem	a	matr�culas	de	alunos e	
//Ler	3	matr�culas	e	imprima	uma	mensagem	informando	se	eles	est�o	ou	n�o	presentes	no	vetor.
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
