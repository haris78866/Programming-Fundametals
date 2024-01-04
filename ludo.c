#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define h 20
#define n 20

int main()
{
char name1[h],name2[n];
int a,b,c,d,e,f,sum1,sum2;

printf(" ------WELOME  TO  THE   DICE GAME------\n");

printf("ENTER THE FIRST PAYER NAME \n");
fgets(name1,sizeof(name1),stdin);

printf("ENTER THE SECOND PAYER NAME \n");
fgets(name2,sizeof(name2),stdin);

printf("ROLLING THE DICE FOR : ");
puts(name1);

srand(time(NULL));
   
 a=rand()%6+1;
 b=rand()%6+1;
 c=rand()%6+1; 
   
printf("DICE 1 : %d \n",a);
printf("DICE 2 : %d \n",b);
printf("DICE 3 : %d \n",c);


printf("ROLLING THE DICE FOR :");
puts(name2);

d=rand()%6+1;
e=rand()%6+1;
f=rand()%6+1;

printf("DICE 1 : %d \n",d);
printf("DICE 2 : %d \n",e);
printf("DICE 3 : %d \n",f);



sum1=a+b+c;
sum2=d+e+f;

printf("CALCULATING THE TOTAL SCORE !!!! \n");

printf("TOTAL SCORE OF  : %d \n",sum1);
puts(name1);
printf("TOTAL SCORE OF  : %d\n ",sum2);
puts(name2);

if(sum1>sum2)
  {
  printf("CONGRAGULATION!!!! AND THE WINNER IS : ");
  puts(name1);
 }
 else if(sum2>sum1)
   {
   printf("CONGRAGULATION!!!! AND THE WINNER IS : ");
  puts(name2);
  }
  else if(sum1==sum2)
  {
   if(a>d)
   {
   printf("CONGRAGULATION!!!! AND THE WINNER IS: ");
   puts(name1);
   }
   else if(d>a)
   {
   printf("CONGRAGULATION!!!! AND THE WINNER IS : ");
  puts(name2);
   }
   else if(b>e)
   {
   printf("CONGRAGULATION!!!! AND THE WINNER IS : ");
  puts(name1);
  }
  else if(e>b)
  {
  printf("CONGRAGULATION!!!! AND THE WINNER IS: ");
  puts(name2);
  }
  else if(c>f)
  {
  printf("CONGRAGULATION!!!! AND THE WINNER IS : ");
  puts(name1);
  }
  else 
  {
    printf("CONGRAGULATION!!!! AND THE WINNER IS : ");
   puts(name2);
   }
}
 
return 0;
}
 

    
