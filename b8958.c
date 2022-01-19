#include <stdio.h>
#include <malloc.h>

int main(void){
    int N, i, j, temp, score;
    scanf("%d", &N);
    char *cases = calloc(81, sizeof(char));

    for (i = 0; i < N; i++){
        score = 0;
        temp = 0;
        scanf("%s", cases);
        for (j = 0; j < 81; j++){
            if (cases[j] == '\0')
                break;
            else if (cases[j] == 'O'){
                temp ++;
                score += temp;
            }else if (cases[j] == 'X')
                temp = 0;
        }
        printf("%d \n", score);
    }
}