#include<stdio.h>
int  temp(int F,int C);

int main()
{
int F;
printf("enter temp in celcius=");
scanf("%d",&C);

printf("the tem in farenheit is %d=",temp(F,C));
return 0;
}

int temp(int F,int  C)
{
int F,C;
F=(C*1.8)+32;
return F;
}



