#include <stdio.h>

int main(void){
    int N, ans;
    scanf("%d", &N);
    if (N < 3 || N == 4 || N == 7){
        printf("-1 \n");
        return 0;
    }
    switch (N % 5){
        case 0:
            ans = N / 5;
            break;
        case 1:
        case 3:
            ans = N / 5 + 1;
            break;
        case 2:
        case 4:
            ans = N / 5 + 2;
            break;
    }
    printf("%d \n", ans);
}