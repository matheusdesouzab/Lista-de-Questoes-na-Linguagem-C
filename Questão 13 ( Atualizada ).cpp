//(13)Fa�a um programa para ler 10 n�meros DIFERENTES a serem armazenados em um vetor. Os dados dever�o ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usu�rio digite um n�mero que j� foi digitado anteriormente, o programa devera pedir para ele digitar outro n�mero. Note que cada valor digitado pelo usu�rio deve ser pesquisado no vetor, verificando se ele existe entre os n�meros que j� foram fornecidos. Exibir na tela o vetor final que foi digitado. 
 
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
