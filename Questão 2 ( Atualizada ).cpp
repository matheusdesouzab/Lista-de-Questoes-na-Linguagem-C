//(2) Faça	um	algoritmo	que	receba	um	vetor	inteiro	de	50	posições	e	em	seguida	imprima	a	média	dos	números	do	vetor.	
#include<stdio.h>
#include<stdlib.h>
int main(){
	int v[50] , i ;
	float soma=0 , media;
	for(i=0 ; i<50 ; i++){
	printf("Informe Vetor (%d):",i);
	scanf("%d",&v[i]);
    soma=soma+v[i];
    media=soma/50;
}
    printf("Media = %.2f\n",media);
return 0;
}
