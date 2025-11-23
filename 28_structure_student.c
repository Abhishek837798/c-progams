#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    int class;
    int year;
    float totalMarks;
};

int main() {
    struct Student s;

    printf("Enter Roll, Name, Class, Year, Total Marks:\n");
    scanf("%d", &s.roll);
    scanf("%s", s.name);
    scanf("%d", &s.class);
    scanf("%d", &s.year);
    scanf("%f", &s.totalMarks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\nName: %s\nClass: %d\nYear: %d\nTotal Marks: %.2f\n",
           s.roll, s.name, s.class, s.year, s.totalMarks);

    return 0;
}
