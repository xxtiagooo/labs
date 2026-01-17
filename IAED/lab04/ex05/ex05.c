/* iaed25 - ist1113875 - lab04/ex05 */
#include <stdio.h>
#include <string.h>
#define MAX 80

int leLinha(char s[]){
    char c;
    int tamanho=0;
    c = getchar();
    while (c != '\n' && c!= EOF){
        tamanho++;
        s[tamanho] = c;
        c = getchar();
    }
    return tamanho;
}

int main(){
    char s[MAX];
    int length,i;
    length = leLinha(s);
    for (i=0;i<=length;i++)
        printf("%c",s[i]);
    putchar('\n');
    return 0;
}