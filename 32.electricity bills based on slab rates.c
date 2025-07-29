#include <stdio.h>
int main() {
    int units;
    float bill = 0;
    printf("Enter electricity units used: ");
    scanf("%d", &units);
    if(units <= 50)
        bill = units * 0.55;
    else if(units <= 100)
        bill = (100 * 0.55) + (units - 100) * 2.0;
    else if(units <= 200)
        bill = (100 * 0.55) + (100 * 2.0) + (units - 200) * 3.0;
    else
        bill = (100 * 1.5) + (100 * 2.0) + (100 * 3.0) + (units - 300) * 5.0;

    printf("Total Electricity Bill: %.2f\n rupees", bill);
    return 0;
}
