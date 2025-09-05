#include<stdio.h>

int main()
{
    int j = 4;
    {
        int j = 5;
        printf("%d", j);
    }

    printf("%d", j);
    return 0;
}