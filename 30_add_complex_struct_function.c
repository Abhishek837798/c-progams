#include <stdio.h>

struct Complex {
    int r;
    int i;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex c;
    c.r = a.r + b.r;
    c.i = a.i + b.i;
    return c;
}

int main() {
    struct Complex c1, c2, c3;

    printf("Enter first complex number (real imaginary): ");
    scanf("%d %d", &c1.r, &c1.i);

    printf("Enter second complex number (real imaginary): ");
    scanf("%d %d", &c2.r, &c2.i);

    c3 = add(c1, c2);

    printf("Sum = %d + %di\n", c3.r, c3.i);
    return 0;
}
