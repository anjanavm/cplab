#include<stdio.h>
void main()
{
int number1,number2,number3;
printf("enter three integer numbers");
scanf("%d%d%d",&number1,&number2,&number3);
if(number1>number2 && number1>number3)   {
     printf("%d is greatest than %d and %d",number1,number2,number3);
  }
else
  {
    if(number2>number3)   {
          printf("%d is greatest than %d and %d",number2,number1,number3);
   }
    else    {
           printf("%d is greatest than %d and %d",number3,number1,number2);
   }         

  }
}   
