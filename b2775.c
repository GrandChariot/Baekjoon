#include <stdio.h>

int main(void){
    int T, k, n, i, j, res;
    scanf("%d", &T);
    int A[15][15];
    for (i = 0; i < 15; i++){
        for(j = 1; j < 15; j++){
            if (i == 0)
                A[i][j] = j;
            else if(j == 1)
                A[i][j] = 1;
            else
                A[i][j] = A[i - 1][j] + A[i][j - 1];
        }
    }
    for (i = 0; i < T; i++){
        scanf("%d %d", &k, &n);
        printf("%d \n", A[k][n]);
    }
}