#include <stdio.h>

int main(void){
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);
    while(A != 0 || B != 0){
        printf("%d \n", A + B);
        scanf("%d", &A);
        scanf("%d", &B);
    }
}