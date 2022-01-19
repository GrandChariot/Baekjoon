#include <stdio.h>
#include <malloc.h>

int main(void){
    int N, i, max;
    double sum;
    max = 0;
    sum = 0;
    scanf("%d", &N);
    int* score = calloc(N, 4);

    for (i = 0; i < N; i++){
        scanf("%d", score + i);
        if (score[i] > max)
            max = score[i];
    }

    for (i = 0; i < N; i++){
        sum += (double)score[i] / max * 100;
    }

    printf("%f", sum / N);
}