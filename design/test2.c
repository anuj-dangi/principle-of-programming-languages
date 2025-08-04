#include <stdio.h>

extern int sharedValue;  // Declaration

int main() {
    printf("%d\n", sharedValue);  // Works perfectly
    return 0;
}