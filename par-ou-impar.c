#include <stdio.h>

int main() {
    int a;
    
    printf("Insira um número: \n");
    scanf("%d", &a);
    
    if(a % 2 == 0){
        printf("Este número é par\n");
    }
    else {
        printf("Este número é ímpar\n");
    }
    
    
    return 0;
}
