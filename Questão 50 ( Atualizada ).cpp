//Armazenar código, nome, quantidade, valor de compra, valor de venda de 30 produtos. A listagem pode ser de todos os produtos ou somente de um ao se digitar o código.  Ex. do menu: 
//1 – Todos os Produtos
//2 – So um produto 
//3 – Sair do sistema 
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i ;
	char nome[30][100];
	float valor[30],valorv[30];
	int qt[30],cod[30],op;
	printf("Escolha um Opcao Abaixo:\n");
	printf("\n (1) Todos Produtos\n (2) Somente 1 Produto\n (3) Sair do Sistema\n");
	scanf("%d",&op);
	switch(op){
	case 1:
	for(i=0;i<30;i++){
    printf("Nome do %d Produto: ",i+1);
    scanf("%s",&nome[i]);
    printf("Codigo do %d Produto: ",i+1);
    scanf("%d",&cod[i]);
    printf("Quantidade do %d Produto: ",i+1);
    scanf("%d",&qt[i]);
    printf("Valor de Compra do %d Produto: ",i+1);
    scanf("%f",&valor[i]);
    printf("Valor de Venda do %d Produto: ",i+1);
    scanf("%f",&valorv[i]);
    printf("\n");
}
for(i=0;i<30;i++){
    printf("\n(Produto %s)\n\n",nome[i]);
    printf("\n%d Codigo do Produto %s\n",cod[i],nome[i]);
    printf("\n%d Quantidade do Produto %s\n",qt[i],nome[i]);
    printf("\n%.2f Valor de Compra do Produto %s\n",valor[i],nome[i]);
    printf("\n%.2f Valor de Venda do Produto %s\n",valorv[i],nome[i]);
    break;
}
case 2:
for(i=0;i<1;i++){
    printf("Nome do %d Produto: ",i+1);
    scanf("%s",&nome[i]);
    printf("Codigo do %d Produto: ",i+1);
    scanf("%d",&cod[i]);
    printf("Quantidade do %d Produto: ",i+1);
    scanf("%d",&qt[i]);
    printf("Valor de Compra do %d Produto: ",i+1);
    scanf("%f",&valor[i]);
    printf("Valor de Venda do %d Produto: ",i+1);
    scanf("%f",&valorv[i]);
    printf("\n");
}
for(i=0;i<1;i++){
    printf("\n(Produto %s)\n\n",nome[i]);
    printf("\n%d Codigo do Produto %s\n",cod[i],nome[i]);
    printf("\n%d Quantidade do Produto %s\n",qt[i],nome[i]);
    printf("\n%.2f Valor de Compra do Produto %s\n",valor[i],nome[i]);
    printf("\n%.2f Valor de Venda do Produto %s\n",valorv[i],nome[i]);
    break;
}
case 3:
	printf("\nPrograma Encerrado");
	break;
}
return 0;
}
