#include<stdio.h>
void main()
{
int number,reminder,sum=0,product,number1;
printf("enter your number");
scanf("%d",&number);
number1=number;
while(number>0)
 {
   reminder=number%10;
   product=reminder*reminder*reminder;
   number=number/10;
   sum=sum+product;
  }
  
if(sum==number1)
 {
  printf("%d is amstrong number",sum);
 }
else
 {
  printf("%d is not amstrong number",sum);
  }

}
