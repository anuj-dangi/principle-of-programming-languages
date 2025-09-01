#include<stdio.h>
#include<math.h>

char *malloc(int);

int* fun(int *no)
{
    static int arr[2] = {1, 2};
    *no = 2;
    return arr;
}

int main()
{
    //static structure->
    //when you compile how code is organized

    int d = sqrt(10);

    char* a = malloc(5);

    printf("%c", *a);
    int n = 0;
    int *no = &n;
    int* arr = fun(no);

    printf("%d ", sizeof(arr));

    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}