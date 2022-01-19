#include <stdio.h>
#include <stdlib.h>

int main(void){
    char A[10001], B[10001];
    int flag, i, new, pA, pB, max;

    for (i = 0; i < 10001; i++){
        A[i] = '0';
        B[i] = '0';
    }

    scanf("%s %s", A, B);

    for (i = 0; i < 10001; i++){
        if (A[i] == 0)
            pA = i;
        if (B[i] == 0)
            pB = i;
    }

    if (pA > pB)
        max = pA + 1;
    else
        max = pB + 1;

    char newA[max], newB[max], sum[max];

    for (i = 0; i < max; i++){
        newA[i] = '0';
        newB[i] = '0';
        sum[i] = 0;
    }

    for (i = 0; i < pA; i++){
        newA[i] = A[pA - i - 1];
    }

    for (i = 0; i < pB; i++){
        newB[i] = B[pB - i - 1];
    }

    flag = 0;
    for (i = 0; i < max - 1; i++){
        new = newA[i] + newB[i] + flag - 96;
        if (new > 9){
            sum[i] = (new - 10);
            flag = 1;
        }else{
            sum[i] = new;
            flag = 0;
        }
    }

    if (flag == 1)
        sum[max - 1] = 1;
    
    flag = 0;

    for (i = max - 1; i >= 0; i--){
        if (flag == 0 && sum[i] > 0)
            flag = 1;
        if (flag == 1)
            printf("%d", sum[i]);
    }
    printf("\n");
}