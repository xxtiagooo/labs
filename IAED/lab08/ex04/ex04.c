/* iaed25 - ist1113875 - lab08/ex04 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int main (){
    char *palavra = malloc(MAX);
    scanf("%s",palavra);
    char *p = palavra;
    while (*p != '\0'){
        printf("%s\n",p);
        p++;
    }
    free(palavra);
    return 0;
}