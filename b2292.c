#include <stdio.h>

int main(void){
    int N, i, j;
    i = 1;
    j = 1;
    scanf("%d", &N);
    while(1){
        if (N <= j)
            break;
        else{
            j += i * 6;
            i++;
        }
    }
    printf("%d \n", i);
}