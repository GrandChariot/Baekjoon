#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (C - B <= 0){
        printf("-1 \n");
        return 0;
    }else
        printf("%d \n", A / (C - B) + 1);
}