#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}

int isArmstrong(int n) {
    int temp = n, sum = 0, d;
    while (temp > 0) {
        d = temp % 10;
        sum += d * d * d;
        temp /= 10;
    }
    return (sum == n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    if (isArmstrong(n))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
