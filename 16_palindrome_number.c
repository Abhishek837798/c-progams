#include <stdio.h>

int main() {
    int n, rev = 0, d, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (temp > 0) {
        d = temp % 10;
        rev = rev * 10 + d;
        temp /= 10;
    }

    if (n == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
