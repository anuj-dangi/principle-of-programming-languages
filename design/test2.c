#include <stdio.h>

extern int sharedValue;  // Declaration
//sharedValue is defined in some other file maybe

int main() {
    printf("%d\n", sharedValue);  // Works perfectly
    return 0;
}