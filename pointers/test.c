#include <stdio.h>

int main() {
    printf("OS-level: %zu-bit\n", sizeof(void*) * 8);
    return 0;
}
