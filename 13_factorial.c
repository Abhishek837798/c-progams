#include <stdio.h>

int main() {
    int n;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %lld\n", fact);
    return 0;
}
