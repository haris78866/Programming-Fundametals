#include<stdio.h>
#include<math.h>
void fun(int x);

int main ()
{
int x;

printf("enter any number\n");
scanf("%d",&x);

fun(x);

return 0;
}


void fun(int x)
{

if (x%2 ==0)
{
printf("even num \n");
}
else 
{
printf("odd num\n");
}
}

