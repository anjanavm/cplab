/*author name:Anjana.v.m
date:20/02/2019
program to find if area of a rectangle is greatre than its perimeter*/

#include<stdio.h>
void main()
{
	int length,breadth;
	float area,perimeter;
	printf("enter length and breadth");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length+breadth);
	if(area>perimeter)
	{	
		printf("area ofrectangle with sides %d and %d is greater than perimeter",length,breadth);
	}
	else
	{
		printf("perimeter ofrectangle with sdes %d and %d is greater than area ",length,breadth);
	}
}
