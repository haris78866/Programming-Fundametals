#include<stdio.h> 
int val(int a,int b); 

int main()
{
int a,b;
printf("enter value of a & b");
scanf("%d%d",&a,&b);
printf("the result is %d",val(a,b));
return 0;
}

int val(int a,int b)
{
if (a==b)
{
printf("%d equal %d\n",a,b);
}
if(a!=b)
{
printf("%d  not equal %d\n",a,b);
}
if(a<=b)
{
printf("%d is less  than or equal %d\n",a,b);
}
return 0;
}
