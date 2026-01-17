/* iaed25 - ist1113875 - lab04/ex04 */
#include <stdio.h>
#include <string.h>
#define MAX 80
#define TRUE 1
#define FALSE 0

int main(){
    char s[MAX];
    int i,j,tamanho, eh_palindromo = TRUE;
    scanf("%s",s);
    tamanho = strlen(s);
    for (i = 0, j = tamanho; i < j; i++,j--){
            if (s[i] != s[j-1]){
            eh_palindromo = FALSE;
            break;
            }
    }
    if (eh_palindromo)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}