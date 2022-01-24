#include <stdio.h>

int Fibonacci(int a){
    if (a == 0)
        return 0;
    else if (a == 1)
        return 1;
    else
        return Fibonacci(a - 2) + Fibonacci(a - 1);
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d \n", Fibonacci(n));
}