#include <stdio.h>
int main() {
   printf("Enter a number (1 to 7): ");
    int n; scanf("%d", &n);
    char * d[] = {"Invalid","Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    printf("%s\n", (n>0&&n<8)?d[n]:"Invalid");
    return 0;
}
