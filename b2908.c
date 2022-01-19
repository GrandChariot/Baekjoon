#include <stdio.h>
#include <stdlib.h>

int main(void){
    char s1[3], s2[3];
    scanf("%s %s", s1, s2);

    int n1, n2;
    n1 = (s1[2] - '0') * 100 + (s1[1] - '0') * 10 + s1[0] - '0';
    n2 = (s2[2] - '0') * 100 + (s2[1] - '0') * 10 + s2[0] - '0';

    if (n2 > n1)
        printf("%d \n", n2);
    else
        printf("%d \n", n1);
}