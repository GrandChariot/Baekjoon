#include <stdio.h>

int main(void){

    char N, a, b, new, temp;
    scanf("%hhd", &N);
    new = N;
    int count = 0;

    do{
        a = new / 10;
        b = new - a * 10;
        temp = a + b;
        new = b * 10 + (temp - ((temp / 10) * 10));
        count++;
    }while(new != N);
    printf("%d \n", count);
}