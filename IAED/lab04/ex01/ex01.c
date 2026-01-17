/* iaed25 - ist1113875 - lab04/ex01 */
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, i, j, v;
    int vec[VECMAX];
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&v);
        vec[i] = v;
    }
    for(i=0;i<n;i++){
        for(j=0;j<vec[i];j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}