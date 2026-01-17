/* iaed25 - ist1113875 - lab03/ex02 */
#include <stdio.h>
#define SALTO 2


/*
void piramide(int N){
    int i, j, nmr_elementos, espacos, el_max, posicao_primeiro_elm, numero;
    nmr_elementos = 1;
    for (i=0; i<=N; i++){
        el_max = nmr_elementos - i;
        posicao_primeiro_elm = el_max - 1 - (i % SALTO);
        for (j=0; j<nmr_elementos; j++){
            numero = 1;
            if (j < posicao_primeiro_elm)
                printf("  ");
            if (j >= posicao_primeiro_elm && j <= el_max - 1) {
                printf("%d", numero);
                printf("  ");
                numero++;
            }
            else {
                printf("%d", numero);
                printf("  ");
                numero--;
            }
            if (j > posicao_primeiro_elm && numero == 1)
                putchar('\n');
        }
        nmr_elementos += SALTO; 
    }
}
 
*/

void piramide(int N){
    int linha, espacos, numero;
    for (linha = 1; linha <= N; linha++){
        for (espacos = 0; espacos < N - linha; espacos++){
            printf("  ");
        }
        for (numero=1;numero<linha;numero++){ // crescer
            printf("%d ",numero);
        }
        printf("%d",numero);
        numero--; //
        for (numero;numero >0; numero--){ // descer
            printf(" %d",numero);
        }
        printf("\n");
    }
}


int main(){
    int n;
    scanf("%d",&n);
    if (n>=2)
        piramide(n);
    return 0;
}