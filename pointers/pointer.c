#include <stdio.h>
 
int main()
{
    char a[10], *x;

    a[2] = 'a';

    printf("%p %p\n", a, x);

    x = a;

    printf("%p %p\n", a, x);

    x = a+1;

    printf("%p %p\n", a, x);

    //a = x;
    //expression must be a modifiable lvalue
//     pointer.c: In function 'main':
// pointer.c:17:7: error: assignment to expression with array type
//      a = x;

    x = &a; //only warning no error

    printf("%p %p\n", a, x);

    // pointer.c: In function 'main':
    // pointer.c:23:7: warning: assignment from incompatible pointer type [-Wincompatible-pointer-types]
    //  x = &a;

    x = a+2;

    printf("%p %p %c\n", a, x, *x);

    x = *(a+2); //

    printf("%p %p\n", a, x);
    // pointer.c:31:7: warning: assignment makes pointer from integer without a cast [-Wint-conversion]
    //  x = *(a+2);
    
    return 0;
}