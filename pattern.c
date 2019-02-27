#include<stdio.h>
void main()
{
int i,j,range;
printf("enter the range:");
scanf("%d",&range);
for(i=0;i<=range;i++)
  {
    for(j=1;j<=i;j++)
        printf("%d",j);
 printf("\n");
  }
}
