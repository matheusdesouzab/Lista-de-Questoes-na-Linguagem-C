//Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que não são múltiplos de 7 ou que terminam com 7. 
#include <stdio.h>
int main() {
    int i,Vert7[100];
    for(i=0 ; i<=100 ; i++){
    if(i%7!=0){
    	if(i%10!=7){
            Vert7[i]=i;
            printf("%d\n",Vert7[i]);
            }}}
        return 0;
                  
}



