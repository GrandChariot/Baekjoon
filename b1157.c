#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *word = calloc(10000001, sizeof(char));
    int *count = calloc(26, sizeof(int));
    int i, max, res, flag;
    flag = 0;
    max = -1;

    for (i = 0; i < 26; i++){
        count[i] = 0;
    }

    scanf("%s", word);

    for (i = 0; i < 10000001; i++){
        if (word[i] == '\0')
            break;
        else if(word[i] >= 'a')
            count[word[i] - 'a']++;
        else
            count[word[i] - 'A']++;
    }

    for (i = 0; i < 26; i++){
        if (count[i] > max){
            max = count[i];
            res = i;
            flag = 0;
        }else if (count[i] == max){
            flag = 1;
        }
    }

    if (flag == 1)
        printf("? \n");
    else
        printf("%c \n", res + 'A');
}