#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    p = 0;
    printf("Value: %d\n", *p);

    free(p); 

    printf("completed\n");

    return 0;
}
