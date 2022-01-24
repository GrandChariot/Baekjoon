#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N, M, i, j, k, max, sum;
    max = 0;
    scanf("%d %d", &N, &M);
    int* cards = calloc(N, sizeof(int));

    for (i = 0; i < N; i++){
        scanf("%d", cards + i);
    }

    for (i = 0; i < N; i++){
        for (j = i + 1; j < N; j++){
            for (k = j + 1; k < N; k++){
                sum = cards[i] + cards[j] + cards[k];
                if (sum <= M && sum > max)
                    max = sum;
            }
        }
    }

    printf("%d \n", max);
}