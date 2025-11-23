#include <stdio.h>

int main() {
    int n, sum = 0, rev = 0, d;
    printf("Enter 3-digit number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        d = temp % 10;
        sum += d;
        rev = rev * 10 + d;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reverse = %d\n", rev);
    return 0;
}
