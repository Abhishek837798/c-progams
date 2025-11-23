#include <stdio.h>

int main() {
    int n, a[100], max;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max) max = a[i];

    printf("Maximum = %d\n", max);
    return 0;
}
