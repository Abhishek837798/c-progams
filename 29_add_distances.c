#include <stdio.h>

struct Distance {
    int ft;
    int inch;
};

int main() {
    struct Distance d1, d2, res;

    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1.ft, &d1.inch);

    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.ft, &d2.inch);

    res.ft = d1.ft + d2.ft;
    res.inch = d1.inch + d2.inch;

    if (res.inch >= 12) {
        res.ft += res.inch / 12;
        res.inch %= 12;
    }

    printf("Result = %d feet %d inches\n", res.ft, res.inch);
    return 0;
}
