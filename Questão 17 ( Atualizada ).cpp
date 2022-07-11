//(17) Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor. 
 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, maior=0, menor=0,v[10],pmn,pm;
    for (i=0;i<10;i++){
      printf("Valor (%d):",i);
      scanf("%d", &v[i]);
      if(i==0){
	  maior=v[i];
	  menor=v[i];
	  }
      if(v[i]>maior){
        maior=v[i];
        pm=i;
      }
      else{
        if(v[i]<menor){
            menor=v[i];
            pmn=i;
          
}}}   
    printf("\n");
    printf("Maior (%d)\n", maior);
    printf("Menor (%d)\n", menor);
    printf("Maior Numero (%d) esta na Posicao(%d)\n",maior,pm);
    printf("Menor Numero (%d) esta na Posicao(%d)\n",menor,pmn);
    return 0;
}
