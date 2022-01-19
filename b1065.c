#include <stdio.h>
#include <stdlib.h>

int HanSoo(int a){
    int res, a1, a2, a3;
    if (a < 100)
        res = 1;
    else if (a == 1000)
        res = 0;
    else {
        a1 = a / 100;
        a -= a1 * 100;
        a2 = a / 10;
        a3 = a - a2 * 10;
        if (a1 - a2 == a2 - a3)
            res = 1;
        else
            res = 0;
    }
    return res;
}

int main(void){
    int N, i, cnt;
    scanf("%d", &N);
    cnt = 0;

    for (i = 1; i < N + 1; i++){
        if (HanSoo(i) == 1)
            cnt++;
    }
    printf("%d \n", cnt);
}