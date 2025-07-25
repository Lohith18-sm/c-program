#include<stdio.h>
int main(){
float num1,num2,num3,average;
printf("enter the three numbers: ");
scanf("%f %f %f",&num1,&num2,&num3);
average=(num1+num2+num3)/3;
printf("average is:%.2f\n",num1,num2,num3,average);
return 0;
}
