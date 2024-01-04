#include<stdio.h>
float  si(int amount);
float  ci(int amount);
float adv(int amount,int years,float interst_rate);

int main ()
{
int years,amount;
float interst_rate;
printf("enter your acount balance\n");
scanf("%d",&amount);
printf("the simple interst is %.2f\n",si(amount));
printf("the compound interest is %.2f\n",ci(amount));

printf("enter a specified years\n");
scanf("%d",&years);
printf("enter a adv interest rate you want ");
scanf("%f",&interst_rate);
printf("the advance interst rate %f",adv(amount,years,interst_rate));

return 0;
}


float  si(int amount)
{
return 0.05*amount*1;
}

float  ci(int amount)
{
return 0.12*amount*1;
}

float  adv(int amount,int years,float interst_rate)
{
return ((years/100)*amount)*interst_rate;
}
