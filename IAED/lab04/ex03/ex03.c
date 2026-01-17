/* iaed25 - ist1113875 - lab04/ex03 */
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, i, j, v, max = 0, novo_max;
    int vec[VECMAX];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&v);
        vec[i] = v;
        if (v > max)
            max = v;
            novo_max = max;
    }
    for (i=0;i<max;i++){
        for (j=0;j<n;j++){
            if (vec[j]>=novo_max){
                putchar('*');
            }
            else
                putchar(' ');
        }
        novo_max --;
        putchar('\n');
    }
    return 0;
}