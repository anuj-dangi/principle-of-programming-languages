#include<stdio.h>

void printFunction()
{
    printf("from printFunction(function sharing)");
}

//every file out there can use the above function if they include at time of compiliation but we don't want that every time 
//so we will use static keyword which will make our function from global scope to local scope.
// static void printFunction()
// {
//     printf("from printFunction(function sharing)");
// }