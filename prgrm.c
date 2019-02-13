#include<stdio.h>
void main()
{
int number,reverse=0,reminder;
printf("enter your number");
scanf("%d",&number); 
while(number>0)
  {
     reminder=number%10;
     reverse=reverse*10+reminder;
     number=number/10;
   }
printf("%d is the reversed number",reverse);
}
