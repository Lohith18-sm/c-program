#include <stdio.h>

int main() {
    int n, r, d = 0, t;
printf("enter number: ");
    scanf("%d", &n);
    t = n;
    while (n > 0) {
        r = n % 10;
        d =d * 10 + r;
       n /= 10;
    }
    printf("%s\n", (t == d) ? "Palindrome" : " It is not palindrome");
    return 0;
}
