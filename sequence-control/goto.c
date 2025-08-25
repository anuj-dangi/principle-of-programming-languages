#include<stdio.h>

int main()
{
    //goto
    int a = 5;

    if(a == 5)
        goto isTrue;
    else
        goto isFalse;

    isTrue:
        printf("is True");
        goto end;

    isFalse:
        printf("is False");

    end:
        return 0;
}