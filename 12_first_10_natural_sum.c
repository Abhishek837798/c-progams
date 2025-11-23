#include <stdio.h>

int main() {
    int sum = 0;
    printf("First 10 natural numbers:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum = %d\n", sum);
    return 0;
}
