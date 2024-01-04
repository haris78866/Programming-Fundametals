#include<stdio.h>
int check(int num);
int main ()

{
int num ;

printf("ENTER ANY NUMBER \n");
scanf("%d",&num);
check(num);
return 0;
}


 
int check(int num)
{
int factorial=1,i; 
if (num<0) 
{
printf(" factorila is undefined \n");
}
else
{
for(i=1 ;i<=num;i++)
{
factorial*=i;
}
printf("%d",factorial);
}
}
