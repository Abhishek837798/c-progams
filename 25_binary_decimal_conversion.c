#include <stdio.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int bin, dec = 0, base = 1, d;
        printf("Enter binary number: ");
        scanf("%d", &bin);
        while (bin > 0) {
            d = bin % 10;
            dec += d * base;
            base *= 2;
            bin /= 10;
        }
        printf("Decimal = %d\n", dec);
    } else if (choice == 2) {
        int dec, bin = 0, base = 1;
        printf("Enter decimal number: ");
        scanf("%d", &dec);
        while (dec > 0) {
            bin += (dec % 2) * base;
            dec /= 2;
            base *= 10;
        }
        printf("Binary = %d\n", bin);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}
