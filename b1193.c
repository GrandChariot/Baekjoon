#include <stdio.h>

int main(void){
    int i, sum, X;
    scanf("%d", &X);
    i = 1;
    sum = 0;
    while(1){
        if (X <= sum)
            break;
        else{
            sum += i;
            i++;
        }
    }
    if (i % 2 == 1){
        printf("%d/%d \n", i - sum + X - 1, sum - X + 1);
    }else{
        printf("%d/%d \n", sum - X + 1, i - sum + X - 1);
    }
}