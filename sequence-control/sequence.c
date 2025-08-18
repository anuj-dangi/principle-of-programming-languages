#include<stdio.h>

int main()
{
    int a, b;

    a = b = 5;  //possible but in other lang like in python it is not possible

    a = 6*(a+=2);

//     .\sequence.c: In function 'int main()':
// .\sequence.c:9:14: error: lvalue required as left operand of assignment
//      a = 6*a+=2;

    printf("%d\n", a);

    int e = 3, c = 5, d = -6;

    a = (c , d+= 2, e);    //, operator evalue from left to right so returns the right most value

    a = (e++, e+=4);

    printf("%d %d\n", a, e);

    printf("%d %d\n", c++*5, c);

    int f=0;

    printf("%d %d %d", f, ++f, ++f);    //evalute from right to left?

    return 1, 0, 66;    //it returns the right most value
    //In C programming, the comma operator (,) is a binary operator that evaluates its left operand, discards the result, and then evaluates its right operand. The result of the entire comma expression is the value and type of the right operand.
}