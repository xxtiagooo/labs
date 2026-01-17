/* iaed25 - ist1113875 - lab02/ex08 */
#include <stdio.h>

int main(){
    int n, cont;
    float m, soma = 0, media;
    scanf("%d",&n);
    cont=n;
    while (cont!=0){
        scanf("%f",&m);
        soma += m;
        cont--;
    }
    media = soma/n;
    printf("%.2f\n", media);
    return 0;
}