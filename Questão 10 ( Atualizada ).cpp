//(10)Preencha um vetor float de 10 posi��es com as notas de alunos. A nota deve ser entre 0 e 10. Se for digitado um valor fora deste intervalo, ex.: 15, a posi��o deve receber valor zero. Ap�s preenchido o vetor, mostre quais posi��es e notas s�o iguais ou maiores que a m�dia da escola, que � 6
#include <stdio.h>
int main(){
	int i ;
	float nota[10];
	int n=0,u=0;
	for(i=0 ; i<10 ; i++){
		printf("Nota (%d): ",i);
		scanf("%f",&nota[i]);
	if(nota[i]>10){
		nota[i]=0;	
	}}
	printf("\nNotas Maiores que Media\n");
	for(i=0 ; i<10 ; i++){
		if(nota[i]>6){
		u=i;
		printf("Nota (%d) ==> (%.2f)\n",u,nota[i]);
	}}
	printf("\nNotas Iguais a Media\n");
	for(i=0 ; i<10 ; i++){
		if(nota[i]==6){
		n=i;
		printf("Nota (%d) ==> (%.2f)\n",n,nota[i]);
	}}
	return 0;
}

