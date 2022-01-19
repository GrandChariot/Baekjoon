#include <stdio.h>

int main(void){
    int i, n, max, count;
    max = 0;
    for (i = 1; i < 10; i++){
        scanf("%d", &n);
        if (n > max){
            max = n;
            count = i;
        }
    }
    printf("%d\n%d\n", max, count);
}