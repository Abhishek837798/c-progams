#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    while (s1[i] != '\0' && s1[i] != '\n') i++;
    while (s2[j] != '\0' && s2[j] != '\n') s1[i++] = s2[j++];

    s1[i] = '\0';
    printf("Concatenated string: %s\n", s1);

    return 0;
}
