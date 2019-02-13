#include<stdio.h>
void main()
{
int number1,number2;
printf("enter the 2 integer numbers");
scanf("%d%d",&number1,&number2);
if(number1>number2)
        printf("%d is greatest than %d",number1,number2);
else
  printf("%d is greatest than %d",number2,number1);
}
