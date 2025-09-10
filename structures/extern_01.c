#include<stdio.h>
#include "externval.h"

int a = 5;
void fun_01(void)
{
    extern int a;

    printf("%d\n", a);
}