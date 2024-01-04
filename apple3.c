#include<stdio.h>
float si(int amount);
float ci(int  amount);
int main()
{
int amount;
printf("enter saving amount ");
scanf("%d",&amount);
printf("the simple interst is  %f\n",si(amount));
printf("the compound interst is  %f\n",ci(amount));
return 0;
}

float si(int amount)
{
float si;
si=(amount*0.05*1)/100;
return si;
}

float ci(int  amount)
{
float ci;
ci=(amount*0.12*1)/100;
return ci;
}
