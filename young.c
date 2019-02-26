/*author name:Anjana.v.m
date:20/02/2019
program to find youngest among three*/
#include<stdio.h>
void main()
{ 	int age_ram,age_shyam,age_ajay,young;
	printf("enter age of ram,shyam and ajay");
	scanf("%d%d%d",&age_ram,&age_shyam,&age_ajay);
	if(age_ram<age_shyam && age_ram<age_ajay)
	
           printf("Ram is youngest");
        else
            if(age_shyam<age_ajay)
            {
               printf("shyam is youngest");
            }
            else
             { 
              printf("Ajay is youngest");
              }
           
}
