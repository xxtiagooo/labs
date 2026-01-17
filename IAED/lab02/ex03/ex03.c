/* iaed25 - ist1113875 - lab02/ex03 */
#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    if (n % m == 0)
        printf("yes\n");
    if (n % m != 0)
        printf("no\n");
    return 0;
}
