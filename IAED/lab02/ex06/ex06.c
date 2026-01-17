/* iaed25 - ist1113875 - lab02/ex06 */
#include <stdio.h>

int main (){
    float m, min, max;
    int contagem;

    scanf("%d%f",&contagem,&m);
    min = max = m;
    while (--contagem){
        scanf("%f",&m);
        if (m<min)
            min = m;
        if (m>max)
            max = m;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}