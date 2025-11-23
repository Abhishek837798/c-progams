#include <stdio.h>

void reverse(int *p, int n) {
    int i = 0, j = n - 1, temp;
    while (i < j) {
        temp = p[i];
        p[i] = p[j];
        p[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n, a[100];
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
