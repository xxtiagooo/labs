/* iaed25 - ist1113875 - lab02/ex01 */
#include <stdio.h>

int main(){
    int num1,num2,num3,maior;
    scanf("%d%d%d",&num1,&num2,&num3);
    maior = num1;
    if (num2 > maior) 
        maior = num2;
    if (num3 > maior)
        maior = num3;
    printf("%d\n",maior);
    return 0;
}


/*
outra alternativa de ver o maior

maior = num2 > maior ? m1 : m2
maior = num3 > maior ? m3 : m
*/