#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
