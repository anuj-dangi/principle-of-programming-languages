#include<stdio.h>

int main()
{
    char b[10] = "hello";

    printf("%s %c", b, b[6]);       //what is b[6]?
    printf("%d\n", sizeof(b));

    char c[] = "hello";

    printf("%s %d\n", c, sizeof(c));

    // char d = {'h', 'e', 'l', 'l', 'o'};

    // printf("%s %d\n", d, sizeof(d));
    /*test.c: In function 'main':
    test.c:14:20: warning: excess elements in scalar initializer
        char d = {'h', 'e', 'l', 'l', 'o'};
                        ^~~
    test.c:14:20: note: (near initialization for 'd')
    test.c:14:25: warning: excess elements in scalar initializer
        char d = {'h', 'e', 'l', 'l', 'o'};
                            ^~~
    test.c:14:25: note: (near initialization for 'd')
    test.c:14:30: warning: excess elements in scalar initializer
        char d = {'h', 'e', 'l', 'l', 'o'};
                                ^~~
    test.c:14:30: note: (near initialization for 'd')
    test.c:14:35: warning: excess elements in scalar initializer
        char d = {'h', 'e', 'l', 'l', 'o'};
                                    ^~~
    test.c:14:35: note: (near initialization for 'd')*/
    char e;
    int x, y, z[13];
    float f = 4.92;
    char *l;

    printf("%d %d %d %d %d %p\n", &e, &x, &y, &z, l);

    return 0;
}