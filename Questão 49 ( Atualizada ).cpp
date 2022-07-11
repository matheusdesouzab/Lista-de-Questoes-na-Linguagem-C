//(49) Armazenar nome e salário de 20 pessoas. Calcular e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o nome e novo salário. 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i ;
	char nome[5][100];
	float salario[5],r[5],slnovo[5];
	for(i=0;i<5;i++){
    printf("Nome da %d Pessoa: ",i+1);
    scanf("%s",&nome[i]);
    printf("Salario de %s:",nome[i]);
    scanf("%f",&salario[i]);
    printf("\n");
}
for(i=0;i<5;i++){
	slnovo[i]=salario[i]+(salario[i]*0.08);	
    printf("%s",nome[i]);
    printf("\t\tSalario a receber: R$ %.2f\n",slnovo[i]);
}
return 0;
}
