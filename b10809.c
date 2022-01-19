#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i;
    char *S = calloc(101, sizeof(char));
    int *numbers = calloc(26, sizeof(int));
    for (i = 0; i < 26; i++)
        numbers[i] = -1;
    scanf("%s", S);

    for (i = 0; i < 101; i++){
        if (S[i] == '\0')
            break;
        else if (numbers[S[i] - 'a'] == -1)
            numbers[S[i] - 'a'] = i;
    }
    
    for (i = 0; i < 26; i++)
        printf("%d ", numbers[i]);
    printf("\n");
}