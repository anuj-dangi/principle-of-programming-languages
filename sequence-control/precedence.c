#include<stdio.h>

int main()
{
    // float a, b;

    // a = b = 15;

    // b += (b++ + b++);
    // printf("Value of a, b: %f, %f\n", a, b );

    // int g = 8, p = 0;

    // printf("g: %d\tp: %d\n", g++, p = p + -g++);    //argument fucntion execute from right to left

    int f=0;

    printf("%d %d %d\n", f, ++f, ++f);

    // float d;
    // int e, i = (d = 5.5, e = 8);

    // printf("%f %d %d\n", d, e, i);

    // int a = 1;
    
    // int b = a+++6;

    // printf("%d %d\n", b, a);

    // printf("%d %d\n",b,  scanf("%d", &b));  //problem if enter flaot and it will stay in buffer

//     The scanf function in C returns an int value that indicates the success or failure of the input operation.
// Specifically, scanf returns:
// The number of input items successfully matched and assigned.
// This means if you are trying to read two integers using scanf("%d %d", &a, &b);, and both are successfully read, scanf will return 2. If only one is successfully read before a matching failure, it will return 1.
// Zero (0)
// if an early matching failure occurs before any data is successfully assigned.

    return (0);
}