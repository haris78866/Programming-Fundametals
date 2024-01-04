#include<stdio.h>
char gradecal(int n);

int main()
{
int n ;
char x;

printf("ENTER YOUR SCORE (0-100)\n");
scanf("%d",&n);

gradecal(n);


return 0;
}

char gradecal(int n)
{
char  garde;
int temp;

temp=n/10;

switch(temp)
{
  case 10:
  case 9: 
  {
     printf("GRADE : A");
     }

   break;
   case 8: 
  {
     printf("GRADE : B");
     }
   break;
    case 7: 
  {
     printf("GRADE : C");
     }
   break;
   case 6: 
  {
     printf("GRADE : D");
     }
   break;
   default : 
   {
   printf("GRADE : F");
   }
   
   break;
   
   return gradecal;
   
}
}
  
  
