#include<stdio.h>


int main ()
{

FILE *f1,*f2,*f3;

int i,num;

f1=fopen("data","w");

for(i=1;i<10;i++)
  {
 sacnf("%d",&num);
   if(num==-1)  break;
   }

fprintf(f1,"%d \n",num );


fclose(f1);

f1=fopen("data","r");
f1=fopen("even","w");
f1=fopen("odd","w");


while(fscanf())

