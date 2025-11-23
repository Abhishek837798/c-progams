#include <stdio.h>
#include <math.h>

#define POWER(x, y) pow((x), (y))

int main() {
    double a, b;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &a, &b);

    printf("Result = %.2f\n", POWER(a, b));
    return 0;
}
