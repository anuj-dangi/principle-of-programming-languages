#include<iostream>
using namespace std;

//find all the 4 digit number by which multiplying a single digit comes the reverse fo that 4 digit
int reverseFun(int i)
{
    int rev = 0;
    while( i > 0)
    {
        rev = (rev*10) + (i % 10);
        i /= 10;
    }

    return rev;
}

int main()
{
    for(int i=1000;i<10000;i++)
    {
        int reverse = reverseFun(i);
        for(int j=2;j<10;j++)
        {
            if(i*j == reverse)
                cout << i << "*" << j << " = " << reverse << endl;
        }
    }
    return 0;
}