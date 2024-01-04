#include<stdio.h>
int main()
{
char op;
int a,b;

printf("enter the num1\n");
scanf("%d",&a);
printf("enter the num2\n");
scanf("%d",&b);
printf("enter the operater\n");
scanf(" %c",&op);


if (op=='+')
{
printf("%d\n",a+b);
}
else if (op=='-')
{
printf("%d\n",a-b);
}
else if (op=='*')
{
printf("%d\n",a*b);
}
else if(op=='/')
{
printf("%d\n",a/b);
}
else
{
printf("invalid operter");
}
return 0;
}


