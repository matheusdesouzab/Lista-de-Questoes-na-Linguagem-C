//(7) Faça	um	programa	que	determina	o	maior	e	o	menor	de	um	conjunto	de	N	números	inteiros	armazenados	num	vetor	A	de	10	elementos.	
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, maior=0, menor=0,v[10];
    for (i=0;i<10;i++){
      printf("Valor (%d):",i);
      scanf("%d", &v[i]);
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
    printf("\n");
    printf("Maior (%d)\n", maior);
    printf("Menor (%d)\n", menor);
    return 0;
}
