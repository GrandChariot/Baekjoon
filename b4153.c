#include <stdio.h>

int main(void){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    do{
        if (a * a + b * b == c * c || c * c + b * b == a * a || a * a + c * c == b * b)
            printf("right \n");
        else
            printf("wrong \n");
        scanf("%d %d %d", &a, &b, &c);
    }while(a != 0 || b != 0 || c != 0);
}