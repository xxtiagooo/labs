/* iaed25 - ist1113875 - lab02/ex04 */
#include <stdio.h>

int main (){
    int num1, num2, num3, menor, medio, maior;
    scanf("%d%d%d",&num1,&num2,&num3);
    maior = num1;
    if (num2 > maior) 
        maior = num2;
    if (num3 > maior)
        maior = num3;
    menor = num1;
    if (num2 < menor)
        menor = num2;
    if (num3 < menor)
        menor = num3;
}