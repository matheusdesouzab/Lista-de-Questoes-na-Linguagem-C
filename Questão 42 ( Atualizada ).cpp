//(42) Elabore um programa que leia dois vetores inteiros de 20 elementos cada, depois some seus elementos, gerando um terceiro vetor. Ao final, mostre o novo vetor gerado.  
#include<stdio.h>
int main(){
int a[20],b[20],c[20],i;
for(i=0;i<20;i++){
printf("Vetor A %d: ",i); 
scanf("%d",&a[i]); 
} 
for(i=0;i<20;i++){
printf("Vetor B %d: ",i); 
scanf("%d",&b[i]); 	
}
for(i=0;i<20;i++){
	c[i]=a[i]+b[i];
	printf("Vetor C (%d) ==> (%d)\n",i,c[i]);
}
return 0;
}
