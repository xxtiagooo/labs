/* iaed25 - ist1113875 - lab03/ex05 */
#include  <stdio.h>

#define FORA 0
#define DENTRO 1

int main(){
    int estado = FORA;
    char c;
    c = getchar();
    while (c!=EOF){
        if (c == ' ' || c == '\n' || c == '\t')
            estado = FORA;
        else if (estado == DENTRO && c == '"'){
            estado = FORA;
            putchar('\n');
        }
        else if (estado == FORA) {
            estado = DENTRO;
            putchar(c);
        }
        c = getchar();
    }
}
