#include <stdio.h>
#include <malloc.h>
#include <string.h>

int Queen(int* l1, int* l2, int depth, int N){
    if (depth == N)
        return 1;
    else{
        int i, j, res;
        int *l1_copy = calloc(N, sizeof(int));
        int *l2_copy = calloc(N, sizeof(int));
        
        res = 0;
        for (i = 0; i < N; i++){
            for (j = 0; j < N; j++){
                if (l1[i] == -1 || l1[i] == l2[depth - j] + j || l1[i] == l2[depth - j] - j){
                    break;
                }
                else if (j == depth){
                    memcpy(l1_copy, l1, sizeof(int) * N);
                    memcpy(l2_copy, l2, sizeof(int) * N);
                    l1_copy[i] = -1;
                    l2_copy[depth] = l1[i];
                    // printf("%d \n", depth);
                    res += Queen(l1_copy, l2_copy, depth + 1, N);
                }
            }
        }

        free(l1_copy);
        free(l2_copy);
        return res;
    }
}

int main(void){
    int N, i;
    scanf("%d", &N);
    int *l1 = calloc(N, sizeof(int));
    int *l2 = calloc(N, sizeof(int));
    for (i = 0; i < N; i++){
        l1[i] = i;
        l2[i] = -999;
    }
    printf("%d \n", Queen(l1, l2, 0, N));

}