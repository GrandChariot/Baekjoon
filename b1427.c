#include <stdio.h>
#include <stdlib.h>

int main(void){
    char num[11];
    scanf("%s", num);
    int i;
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (i = 0; i < 11; i++){
        if (num[i] == '\0')
            break;
        else
            count[num[i] - '0']++;
    }

    for (i = 9; i >= 0; i--){
        while (count[i] != 0){
            printf("%d", i);
            count[i]--;
        }
    }
    printf("\n");
}