#include <stdio.h>

int main(void){
    int a, b, c, d, e, f, g, h;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    if (a == c)
        g = e;
    else if (c == e)
        g = a;
    else
        g = c;
    
    if (b == d)
        h = f;
    else if (d == f)
        h = b;
    else
        h = d;

    printf("%d %d \n", g, h);
}