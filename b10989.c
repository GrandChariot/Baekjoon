#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void){
    int N, i, num;
    scanf("%d", &N);
    int *count = calloc(10001, sizeof(int));
    
    for (i = 1; i < 10001; i++)
        count[i] = 0;
    
    for (i = 0; i < N; i++){
        scanf("%d", &num);
        count[num]++;
    }
    for (i = 1; i < 10001; i++){
        num = count[i];
        while(num > 0){
            printf("%d \n", i);
            num--;
        }
    }
}