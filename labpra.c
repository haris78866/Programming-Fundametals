#include<stdio.h>
int main()
{
int i,j,k,r;
printf("enter rows ");
scanf("%d",&r);

for(i=1;i<=r;i++)
  {
  for(k=1;k<=2;k++)
   {
   printf(" ");
   }
   for(j=1;j<=r-1;j++)
   {
   printf("*");
   }
  }
  printf("/n");
  }
