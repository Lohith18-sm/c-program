#include <stdio.h>
int main() {
    int a1, a2, a3;
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 + a2 + a3 == 180 && a1 > 0 && a2 > 0 && a3 > 0)
        printf("Valid Triangle\n");
    else
        printf("Invalid Triangle\n");

    return 0;
}
