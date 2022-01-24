#include <stdio.h>

int factorial(int a){
    if (a == 1 || a == 0)
        return 1;
    else
        return factorial(a - 1) * a;
}

int main(void){
    int N;
    scanf("%d", &N);
    printf("%d \n", factorial(N));
}