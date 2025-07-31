#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers from %d to 1:\n", n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
