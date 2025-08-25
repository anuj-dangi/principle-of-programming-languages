#include<stdio.h>

//error but allowed in pyton
// void fun(int i=5)
// {
// }

int main()
{
    float a = 5.4;
    //in switch the input can't be float, double
    // switch(//a)
    // {
    //     case 5:   printf("yes");
    //                 break;
    //     default: printf("no");
    //             break;
    // }

    int i=10;
    for(int i=0, j=6;i<5, j>0;i++, j--)
    {
        printf("i %d, j %d\n", i, j);
    }

    printf("%d", i);

    int c = 6;
    if(c > 5)   //unamed bock inside a unamed block
    {
        c -= 1;
        int d = 7;
        {
            float c = 3.5;

            printf(" %f, %d ", c, d);
        }
       // break;        //error
    }
    //break;        //error

    main();     //main is also a function() -> we can call it
    return 0;
}