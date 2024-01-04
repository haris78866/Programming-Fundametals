#include<stdio.h>

int sum(int a,int d,int n);

int main()
{
int a,d,n;
printf("enter a first num of series\n");
scanf("%d",&a);
printf("enter the total  num of series\n");
scanf("%d",&n);
printf("enter diference b/w num of series\n");
scanf("%d",&d);

printf("the  num of series is %d=\n",sum(a,d,n));
return 0;
}

int sum(int a,int d,int n)
{
int sum;
sum=(n/2)*(2*a+(n-1)*d);
return sum;
}

