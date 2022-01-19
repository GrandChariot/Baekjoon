#include <stdio.h>
#include <math.h>

int main(void){
    int is_prime[123456 * 2 + 1];
    int primes[35000];
    int i, j, n, k, root, cnt;
    is_prime[0] = 0;
    is_prime[1] = 0;
    is_prime[2] = 1;
    primes[0] = 2;
    k = 1;

    for (i = 3; i <= 123456 * 2; i++){
        root = sqrt(i);
        for (j = 0; j < 123456 * 2; j++){
            if (i % primes[j] == 0){
                is_prime[i] = 0;
                break;
            }else if(primes[j] > root){
                primes[k++] = i;
                is_prime[i] = 1;
                break;
            }
        }
    }

    n = 1;
    while (n != 0){
        cnt = 0;
        scanf("%d", &n);
        for (i = n + 1; i <= 2 * n; i++){
            if (is_prime[i] == 1)
                cnt++;
        }
        if (cnt != 0)
            printf("%d \n", cnt);
    }
}