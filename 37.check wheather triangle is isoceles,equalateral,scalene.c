#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("The triangle is equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides do not form a triangle.\n");
    }

    return 0;
}

