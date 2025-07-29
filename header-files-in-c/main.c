#include <stdio.h>
//user-defined header file
#include "header.h"
//no need to declare as in function sharing
int main()
{
    printf("sum is %d\n", add(5, 1234));
    return 0;
}