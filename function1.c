#include<stdio.h>
int a,b;


void subtraction()
{
printf("differ is =%d\n",a-b);
}
void getval()
{
printf("enter a ");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
}
int main()
{
getval();

subtraction();


return 0;
}
