#include<stdio.h>
#include "externval.h"
extern int a;

int main()
{
    a = 5;
    fun_01();
    return 0;
}