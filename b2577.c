#include <stdio.h>

int main(void){
    int A, B, C, mul, i, j, pow, flag;
    scanf("%d %d %d", &A, &B, &C);
    mul = A * B * C;
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    flag = 0;

    for (i = 9; i >= 0; i--){
        pow = 1;
        for (j = 0; j < i; j++)
            pow *= 10;
        if (mul > pow){
            arr[mul/pow]++;
            mul -= mul / pow * pow;
            flag = 1;
        }else if(flag == 1){
            arr[0]++;
        }
    }
    for (i = 0; i < 10; i++)
        printf("%d \n", arr[i]);
}