#include<stdio.h>




int swapa(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
return a;
}
int swapb(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
return b;
}
int main(void)
{
int a,b;
printf("enter value of a\n");
scanf("%d",&a);
printf("enter value of b\n");
scanf("%d",&b);

printf("swap value of a is %d=\n",swapa(a,b));
printf("swap value of b is %d=\n",swapb(a,b));

return 0;
}
