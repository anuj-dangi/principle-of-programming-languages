#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 10, b = 5, c = 5, d = 1;
    
    b = 2 * a + c - (a = 28 * d);

    printf("a: %d\tb: %d\tc: %d\td: %d\n", a, b, c, d);

    a = 10, b = 5, c = 5, d = 1;
 
    b = 2 * a + c - a, a = 28 * d;

    printf("a: %d\tb: %d\tc: %d\td: %d\n", a, b, c, d);

    a = 10, b = 5, c = 5, d = 1;

    printf ("a: %d\tb: %d\tc: %d\td: %d\n", a, b = 2 * a + c - (a = 28 * d), c, d = d + 2);
    
    exit(0);
}