/* iaed25 - ist1113875 - lab04/ex02 */
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, i, j, v, max = 0;
    int vec[VECMAX];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&v);
        vec[i] = v;
        if (v > max)
            max = v;
    }
    for (i=0;i<max;i++){
        for (j=0;j<n;j++){
            if (vec[j]>0){
                putchar('*');
                vec[j] -= 1;
            }
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}