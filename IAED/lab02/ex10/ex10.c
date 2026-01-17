/* iaed25 - ist1113875 - lab02/ex10 */
#include <stdio.h>

int main(){
    int n, soma=0, digitos=0, dig = 0;
    scanf("%d",&n);
    while (n!=0){
        dig = n%10;
        soma += dig;
        digitos++;
        n /=10;
    }
    printf("%d\n%d\n",digitos,soma);
    return 0;
}