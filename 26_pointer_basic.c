#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", (void*)&a);
    printf("Pointer p holds address = %p\n", (void*)p);
    printf("Value at address stored in p = %d\n", *p);

    return 0;
}
