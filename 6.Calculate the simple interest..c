#include <stdio.h>
int main(){
int principal,rate,years,si;
printf("enter the principal: ");
scanf("%d",&principal);
printf("enter the rate: ");
printf("%d",&rate);
printf("enter the years: ");
scanf("%d",&years);
si=(principal*rate*years)/100;
printf("simple interest is=%.2d\n",si);
return 0;
}
