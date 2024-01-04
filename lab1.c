#include<stdio.h>

int sub(int a, int b)
{
return a-b;
}
int mul(int a, int b)
{
return a*b;
}

int main(void)
{
int a,b;
printf("enter value of a\n");
scanf(" %d",&a);
printf("enter value of b\n");
scanf(" %d",&b);
printf("sub of a&b is %d\n",sub(a,b));
printf("mul of a&b is %d",mul(a,b));

return 0;
}
