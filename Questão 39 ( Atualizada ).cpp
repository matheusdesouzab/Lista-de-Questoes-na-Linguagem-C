//(39)Preencher um vetor com 5 números e guardar o cubo dos números em outro vetor. Mostrar os dois vetores. 
#include<stdio.h>
int main(){
	int a[5] , b[5] , i;
	for(i=0 ; i<5 ; i++){
		printf("Vetor A (%d): ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0 ; i<5 ; i++){
	b[i]=a[i]*a[i]*a[i];
	printf("\nVetor A (%d)",a[i]);
	printf("\t\tVetor B (%d)\t",b[i]);
}
return 0;
}
	

