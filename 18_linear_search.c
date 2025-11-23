#include <stdio.h>

int main() {
    int n, a[100], key;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at index %d (position %d)\n", i, i + 1);
            return 0;
        }
    }
    printf("Not Found\n");
    return 0;
}
