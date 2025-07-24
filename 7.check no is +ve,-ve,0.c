#include<stdio.h>
int main(){
int num;
printf("enter the number: ");
scanf("%d",&num);
printf("the results are!!!!\n");
if (num>0){
printf("number is positive");
}else if(num<0){
printf("number is negative");
}else{
printf("the number is 0");
}
return 0;
}
