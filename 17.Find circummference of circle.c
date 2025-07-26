#include <stdio.h>
#define PI 3.14159
int main() {
float radius, cir;
printf("Enter radius: ");
scanf("%f", &radius);
cir = 2 * PI * radius;
printf("Circumference of the circle is %.2f\n", cir);
return 0;
}
