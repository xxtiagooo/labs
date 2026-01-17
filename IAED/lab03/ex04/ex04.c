/* iaed25 - ist1113875 - lab03/ex04 */
#include <stdio.h>

int reduzNumero(int n){
    
}

int main(){
    char c;
    int num;
    c = getchar();
    while(c != EOF){
        scanf("%d",&num);
        num = reduzNumero(num);
        printf("%d\t",num);
        c = getchar();
    }
    return 0;
}