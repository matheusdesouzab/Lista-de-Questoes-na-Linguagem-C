//(41) Elabore um programa que leia um conjunto A com 50 n�meros reais e construa um conjunto B, onde os elementos de ordem (posi��o) par s�o os elementos correspondentes de A divididos por 2 e os de ordem (posi��o) �mpar correspondem aos elementos de A multiplicados por 3. Ao final, mostre os dois conjuntos de n�meros.  
#include<stdio.h>
int main(){
int a[20],b[20],i;
for(i=0;i<10;i++){
printf("Vetor A %d: ",i); 
scanf("%d",&a[i]); 
if(a[i]%2==0){
	b[i]=a[i]/2;
}else{
	b[i]=a[i]*3;
}}
for(i=0;i<10;i++){
	printf("Vetor B %d ==> %d\n",i,b[i]);
}
return 0;
}


