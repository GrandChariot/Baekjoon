#include <stdio.h>

int main(void){
    int N, i, j, MAX, MIN;
    scanf("%d", &N);
    MAX = -10000000;
    MIN = 10000000;

    for (i = 0; i < N; i++){
        scanf("%d", &j);
        if (j > MAX)
            MAX = j;
        if (j < MIN)
            MIN = j;
    }
    printf("%d %d \n", MIN, MAX);
}