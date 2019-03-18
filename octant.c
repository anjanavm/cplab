#include<stdio.h>
void main()
{
int number,remainder,octal=0,i;
printf("enter the integer ");
scanf("%d",&number);
if(number>0)
 {
    remainder=number%8;
    octal=octal+(remainder*i);
    i=i*10;
    printf("the octant value is %d",octal);
  }
}
