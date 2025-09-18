#include <stdio.h>
#include <stdlib.h>

typedef struct {
     float first;
     float end;
} Node;

int main(void)
{
     Node p[5], *q;
     int i;
     float a, b;
     
     for (i=0; i<5; i++) {
          p[i].first = 3.14 + i;
          p[i].end = 7.89;
     }

     q = &p[0];
     i = 0;
    //  q is a pointer which is pointing to the start of the p array. first instruction inside while loop is a = q->first it will assign p[0].first value to the a var and b = ++q->end
    //  as -> is at higher precedence so q->end it will execute first and will give p[0].end value in return so it remains ++(p[0].end) it will increase p[0].end value by 1 each time
    //  when loop will run. => ++(q->end)
    //  what we actullay what it to print all the values of p array, so we have to increment the q pointer by 1 each time what we can do is to 
    //  use post increment in place of pre incrment b = q++->end it will first execute q->end and then it will increase q by 1 => ((q++)->end).
     while(i < 5) {
          a = q->first;
          b = q++->end;
          printf("\tFirst: %f\tLast: %f\n", a, b);
          i += 1;
     }

     exit(0);
}