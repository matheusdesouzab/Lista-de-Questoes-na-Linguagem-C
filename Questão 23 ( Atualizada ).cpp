//(23)Fa�a um programa que receba um vetor de 6 n�meros inteiros e mostre:  
// � Os n�meros pares digitados;
// � A soma dos n�meros pares digitados;
// � Os n�meros �mpares digitados;
// � A quantidade de n�meros �mpares digitados; 
#include<stdio.h> 
#include<stdlib.h> 
int main() {
	int v[6] , i , par=0 ,vpar[6],impar=0 , vimpar[6];
	float soma=0;
	for(i=0;i<6;i++){
	printf ("Numero (%d):",i); 
    scanf ("%d",&v[i]); 
    if(v[i]%2==0){
       vpar[par]=v[i];
       soma=soma+v[i];
       par++;     
	}else{
	   vimpar[impar]=v[i];
	   impar++;
	}}
	printf("\n");
	printf("Numeros Pares Digitados:\n");
	printf("\n");
	for(i=0;i<par;i++){
	printf("%d\n",vpar[i]);
}
    printf("\n");
    printf("Soma dos Pares Digitados:\n");
    printf("\n");
	printf("%.2f\n",soma);
	printf("\n");
	printf("Numeros Impares Digitados:\n");
	printf("\n");
	for(i=0;i<impar;i++){
	printf("%d\n",vimpar[i]);
}
    printf("\n");
    printf("Quantidade de Impares Digitados:\n");
    printf("\n");
    printf("%d\n",impar);
return 0;
}
		
