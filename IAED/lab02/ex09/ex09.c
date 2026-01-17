/* iaed25 - ist1113875 - lab02/ex09 */
#include <stdio.h>

int main(){
    int input;
    float seg,min, hora;
    scanf("%d",&input);
    hora = input/3600;
    input -= hora*3600;
    min = input/60;
    input -= min*60;
    seg = input;
    printf("%02.0f:%02.0f:%02.0f\n",hora,min,seg);
    return 0;
}