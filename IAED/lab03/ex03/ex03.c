/* iaed25 - ist1113875 - lab03/ex03 */
#include <stdio.h>

void cruz(int tamanho){
    int linha, coluna;
    for(linha = 1; linha <= tamanho; linha++){
        for(coluna = 1; coluna <= tamanho; coluna++){
            if(linha == coluna || linha + coluna == tamanho + 1){
                if (coluna != tamanho)
                    printf("* ");
                else
                    putchar('*');
            } else {
                if (coluna != tamanho)
                    printf("- ");
                else
                    putchar('-');
            }
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    cruz(n);
    return 0;
}