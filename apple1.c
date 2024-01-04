#include<stdio.h>
int sum(int a,int d,int n);

int main()
{
int a,d,n;
printf("enter value of a d and n ");
scanf("%d%d%d",&a,&d,&n);

printf("the sum of series is %d",sum(a,d,n));
return 0;
}

int sum(int a,int d,int n)
{
int sum;
sum=(n/2)*(2*a+(n-1)*d);
return sum;
}
