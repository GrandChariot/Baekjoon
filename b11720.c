#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum, i, N;
    scanf("%d", &N);
    char *numbers = calloc(N + 1, sizeof(char));
    scanf("%s", numbers);
    sum = 0;
    for (i = 0; i < N; i++){
        sum += numbers[i] - 48;
    }
    printf("%d \n", sum);
}