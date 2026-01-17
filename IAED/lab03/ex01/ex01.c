/* iaed25 - ist1113875 - lab03/ex01 */
#include <stdio.h>

/*
void quadrado(int N){
    int quadrado[N][N], i, j, valores = 0;
    i = j = 0;
    for (i = 0; i < N; i++) {
        valores = i + 1;
        for (j = 0; j < N; j++) {
            quadrado[i][j] = valores;
            valores++;
            if (j != N-1)
                printf("%d\t", quadrado[i][j]);
            else
                printf("%d\n", quadrado[i][j]);
        }
    }
    printf("\n");
}
*/

void quadrado(int N){
    int i, j;
    i = j = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (j != 0)
                putchar('\t');
            printf("%d", i + j + 1);
        }
        putchar('\n');
    }
}

int main(){
    int n;
    scanf ("%d",&n);
    if (n >= 2)
        quadrado(n);
    return 0;
}