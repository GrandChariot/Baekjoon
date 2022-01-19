#include <stdio.h>
#include <malloc.h>

int main(void){
    int C, i, j, N, *score, sum, cnt;
    double avg;
    scanf("%d", &C);
    for (i = 0; i < C; i++){
        scanf("%d", &N);
        score = calloc(N, sizeof(int));
        sum = 0;
        avg = 0;
        cnt = 0;
        for (j = 0; j < N; j++){
            scanf("%d", score + j);
            sum += score[j];
        }
        avg = (double)sum / N;
        for (j = 0; j < N; j++){
            if (score[j] > avg)
                cnt++;
        }
        printf("%.3f%% \n", (double)cnt / N * 100);
        free(score);
    }
}