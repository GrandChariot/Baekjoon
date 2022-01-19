#include <stdio.h>
#include <stdlib.h>

int self_number(int a){
    int res = a;
    res += a / 1000;
    a -= a / 1000 * 1000;
    res += a / 100;
    a -= a / 100 * 100;
    res += a / 10;
    a -= a / 10 * 10;
    res += a;
    return res;
}

int main(void){
    int* flags = calloc(10100, sizeof(int));
    int i;
    for (i = 0; i < 10100; i++){
        flags[i] = 1;
    }

    for (i = 0; i < 9999; i++){
        flags[self_number(i)] = 0;
    }

    for (i = 1; i < 10001; i++){
        if (flags[i] == 1)
            printf("%d \n", i);
    }
}