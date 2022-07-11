//(13)Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa devera pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado. 
 
#include <stdio.h>
int main() {
    int i=0,x,n,e=0;
    int v[10];
     for(i=0 ; i<10 ; i++){
        printf("Vetor [%d]: ", i);
        scanf("%d", &n);
        x = 0;
        while ( x < i ) {
            if ( v[x] == n ){
            	printf("\n");
                printf("Numero Ja Esta no Vetor\n");
                e= 1;
            }else {
                x++;
            }          
            if ( e== 1 ){          	
                printf("\nEntre novamente com o Vetor [%d]:", i);
                scanf("%d", &n);
                e = 0;
            }}
        v[i] = n;
    }
    printf( "\n\n");
    for( i=0; i < 10; i++ )
    printf("Vetor [%d] ==> [%d]\n", i, v[i]);  
    return 0;
}
