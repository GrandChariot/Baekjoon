#include <stdio.h>
#include <math.h>

int main(void){
    int is_prime[10001];
    int primes[3000];
    int T, i, j, n, k, root, cnt;
    is_prime[0] = 0;
    is_prime[1] = 0;
    is_prime[2] = 1;
    primes[0] = 2;
    k = 1;

    for (i = 3; i <= 10001; i++){
        root = sqrt(i);
        for (j = 0; j < 10001; j++){
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
    scanf("%d", &T);
    for (i = 0; i < T; i++){
        scanf("%d", &n);
        for (j = n / 2; j > 0; j--){
            if (is_prime[j] == 1 && is_prime[n - j] == 1){
                printf("%d %d \n", j, n - j);
                break;
            }
        }
    }
}