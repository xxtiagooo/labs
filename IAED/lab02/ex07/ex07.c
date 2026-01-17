/* iaed25 - ist1113875 - lab02/ex07 */
#include <stdio.h>

int main(){
    int n, divisores = 1, contador = 0; // dividores são os número que vão dividir
    scanf("%d", &n);
    while (divisores<=n){
        if (n % divisores == 0)
            contador++;
        divisores++;
    }
    printf("%d\n", contador);
    return 0;
}