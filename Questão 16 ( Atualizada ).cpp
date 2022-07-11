//(16) Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos juntamente com o maior, o menor e a media dos valores. 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, maior=0, menor=0,v[5];
    float soma=0, media=0;
    for (i=0;i<5;i++){
      printf("Valor (%d):",i);
      scanf("%d", &v[i]);
      soma=soma+v[i];
      media=soma/5;
      if(i==0){
	  maior=v[i];
	  menor=v[i];
	  }
      if(v[i]>maior){
        maior=v[i];
      }
      else{
        if(v[i]<menor){
            menor=v[i];
}}}
    printf("\nValores Lidos\n");	
    printf("\n");	
    for (i=0;i<5;i++){
    printf("Valor (%d)\n",v[i]);
}
    printf("\n");
    printf("Maior (%d)\n", maior);
    printf("Menor (%d)\n", menor);
    printf("Media (%.2f)\n", media);
    return 0;
}
