#include <stdio.h>
//must declare at top level to work
void printFunction();
//and the definition is in different file which can be shared at time of compilation
//gcc main.c function.c -o main

int main()
{
    printFunction();
    return 0;
}
