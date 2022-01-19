#include <stdio.h>

int main(void){
    int N, M, i;
    scanf("%d", &N);
    M = N;
    i = 2;

    while(1){
        if (M % i == 0){
            printf("%d \n", i);
            M /= i;
        }else if (M == 1)
            break;
        else{
            i++;
        }
    }
}