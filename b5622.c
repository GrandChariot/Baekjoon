#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s[16];
    scanf("%s", s);
    int i, sum;
    sum = 0;
    for (i = 0; i < 16; i++){
        if (s[i] == '\0')
            break;
        else if (s[i] < 'D')
            sum += 3;
        else if (s[i] < 'G')
            sum += 4;
        else if (s[i] < 'J')
            sum += 5;
        else if (s[i] < 'M') 
            sum += 6;
        else if (s[i] < 'P') 
            sum += 7;
        else if (s[i] < 'T') 
            sum += 8;
        else if (s[i] < 'W') 
            sum += 9;
        else
            sum += 10;
    }
    printf("%d \n", sum);
}
