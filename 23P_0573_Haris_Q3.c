#include<stdio.h>
#include<stdbool.h>
float netprofit(float revenue,float expenses);
float profitmargin(float revenue,float expenses);
float ROI(float revenue, float expenses);
float check(float revenue ,float expenses);
int main(void)
{
	float revenue,expenses;
	printf("enter the total revenue for the year \n");
	scanf("%f",&revenue);

       printf("enter the total expenses for year \n");	
       scanf("%f",&expenses);
	 check(revenue , expenses);
  

     
return 0;
}
float netprofit(float revenue,float expenses)
{
	return revenue-expenses;
}
float profitmargin(float revenue,float expenses)
{
	float x=netprofit( revenue, expenses);
	return x/revenue;
}
float ROI(float revenue, float expenses)
{
	float y= netprofit( revenue, expenses);
	return y/expenses;
}

float check(float revenue ,float expenses)
{
if (revenue<=0 || expenses<=0 )
{
printf("!!!____ERROR\n");
return -1;
}
else 
{
     printf("the net profit is %.2f%\n",netprofit( revenue, expenses));
     printf("the  profit margin is %.2f%\n", profitmargin( revenue, expenses));
     printf("the ROI is %.2f\n%", ROI(revenue,expenses));
return 1;
}
}







