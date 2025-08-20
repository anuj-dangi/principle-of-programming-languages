#include<stdio.h>

int main()
{
    int a = 5;
    int* p = &a;

    int q = 2;

    printf("%d\n", *p++);
    
    printf("%d\n", --*p);

    printf("%d\n", printf("hello"));

    if( q = (a + (5 > 12)))
    {
        
    }

    if(-1)
    {
        printf("neg is true\n");
    }

    printf("%d\n", q);

    int b =5;
    int c = 2;

    printf("%d\n", (b++)+(++c));    //can't do b+++c++;

    int d = 2;

    //printf("%d\n", 5<<3-7*2);   //-, *  is at higher precedence then <<

    (1 == 1) ? printf("true\n") : printf("false\n");

    d>2 ? printf("") : printf("");

    return 0;
}