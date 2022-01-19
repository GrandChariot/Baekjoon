#include <stdio.h>

int main(void){
    int T, H, W, N, n, i;
    scanf("%d", &T);
    for (i = 0; i < T; i++){
        scanf("%d %d %d", &H, &W, &N);
        n = N % H * 100 + (N - 1) / H + 1;
        if (N % H == 0)
            n += H * 100;
        printf("%d \n", n);
    }
}