#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, b, a;
    int r;
    double q;
    int p;

    printf("&c: %p, &b: %p, &a: %p\n", &c, &b, &a);
    printf("&r: %p, &q: %p, &p: %p\n", &r, &q, &p);
    
    exit(0);
}