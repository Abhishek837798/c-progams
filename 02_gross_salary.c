#include <stdio.h>

int main() {
    float basic, hra, da, gross;
    printf("Enter basic, HRA and DA: ");
    scanf("%f %f %f", &basic, &hra, &da);

    gross = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
