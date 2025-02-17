#include<stdio.h>
#include<string.h>
int main()
{
int id;
char name[255];
float salary;
int attendance;
printf("enter name");
scanf("%s",name);

printf("enter id\n");
scanf("%d",&id);

printf("enter salary\n");
scanf("%f",&salary);

printf("enter the number of days worked");
scanf("%d",&attendance);
float bonus = 0.0f;
float gross_salary =0.0f;
char category[50] ="GOOD";

if(attendance>25)
{
    bonus =(bonus/100.0f)*5.0f;
}
else if(attendance< 10)
{
bonus=(-1.0f*((bonus/100.0f)*50.0f));
}
gross_salary=(salary+bonus);
if(attendance>25)
{
strcpy(category,"excellent");
}
else if(attendance<15);
{
strcpy(category,"need improvement");
printf("\tid:%d\n",id);
printf("\tname:%s\n",name);
printf("\tbasic salary:%.2f\n",salary);
if(bonus>0)
{
 printf("bonus:%.2f\n",bonus);
}
printf("final salary:%.2f\n",gross_salary);
printf("employe performance category:%s\n",category);
}
return 0;
}
    
    
