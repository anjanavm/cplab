#include<stdio.h>
void main()
{
int number,reverse=0,number1,reminder;
printf("enter your number");
scanf("%d",&number);
number1=number;
while(number>0)
   {
      reminder=number%10;
      reverse=reverse*10+reminder;
      number=number/10;
   }
if(number1==reverse)
   printf("%d is a palindrome",number1);
 
else
  printf("%d is not a palindrome",number1);
 }
