#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s[101];
    scanf("%s", s);
    int i, cnt;
    cnt = 0;
    for (i = 1; i < 101; i++){
        if (s[i] == '=' || s[i] == '-')
            cnt--;
        else if (s[i] == 'j' && (s[i - 1] == 'l' || s[i - 1] == 'n'))
            cnt--;
        else if (s[i] == 'z' && s[i - 1] == 'd' && s[i + 1] == '=')
            cnt--;
        else if (s[i] == '\0'){
            cnt += i;
            break;
        }
    }
    printf("%d \n", cnt);
}