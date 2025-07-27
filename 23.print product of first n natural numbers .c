#include <stdio.h>

int main() {
int n, p= 1; 
printf("Enter a positive integer: ");
scanf("%d", &n);
        for(int i = 1; i <= n; i++) {
            p *= i;
        }
        printf("The product of first %d natural numbers is: %llu\n", n, p);
    

    return 0;
}
