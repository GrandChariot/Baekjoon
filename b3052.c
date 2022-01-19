#include <stdio.h>
#include <malloc.h>

int main(void){
    int i, j, cnt, n, flag;
    cnt = 0;
    int* rest = calloc(10, 4);
    for (i = 0; i < 10; i++){
        flag = 0;
        scanf("%d", &n);
        for (j = 0; j < cnt; j++){
            if (rest[j] == n % 42){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            rest[cnt] = n % 42;
            cnt++;
        }
    }
    printf("%d \n", cnt);
}