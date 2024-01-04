#include<stdio.h>
int main(void)
{
int a,b,c,sum,avg;
printf("enter a");
printf("enter b");
printf("enter c");
scanf("%i%i%i",&a,&b,&c);
sum=a+b+c;
avg=(a+b+c)/3;
printf("the sum is %i\n",sum);
printf("the avg is %i",avg);
return(0);
}
