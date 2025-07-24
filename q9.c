#include<stdio.h>
int main(){
float cel,fah;
printf("enter temp in cel: ");
scanf("%f",&cel);
fah=(cel*9/5)+32;
printf("%.2f cel=%.2f fah\n",cel,fah);
return 0;
}
