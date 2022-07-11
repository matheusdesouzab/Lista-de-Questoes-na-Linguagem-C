// (24) Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuário não informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso abaixo:  
//• Soma entre x e y: soma de cada elemento de x com o elemento da mesma posição em y. 
//Produto entre x e y: multiplicação de cada elemento de x com o elemento da mesma posição em y. 
#include<stdio.h> 
#include<stdlib.h> 
int main() {
	int x[5] , y[5] , i ;
	for(i=0;i<5;i++){
	printf ("Vetor X (%d):",i); 
    scanf ("%d",&x[i]);
}
    printf("\n");
    for(i=0;i<5;i++){
	printf ("Vetor Y (%d):",i); 
    scanf ("%d",&y[i]);
}
    printf("\n");
    printf("Vetor Resultante Soma\n");
    printf("\n");
	for(i=0;i<5;i++){
	x[i]=y[i]+x[i];
	printf("Vetor Soma (%d) ==> %d\n",i,x[i]);
}
    printf("\n");
    printf("Vetor Resultante Produto\n");
    printf("\n");
	for(i=0;i<5;i++){
	y[i]=x[i]*y[i];
	printf("Vetor Produto (%d) ==> %d\n",i,y[i]);
}
return 0;
}
