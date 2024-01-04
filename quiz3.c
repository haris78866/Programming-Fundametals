#include<stdio.h>
int change(char sign );

int main ()
{
char sign;
printf("enter the sign \n");
scanf("%c",&sign);

printf("new sign %c \n", change( sign ));
return 0;
}

int change(char sign )
{
if (sign==90)   // 90 is the ascii of Z
{
return 65; // ascii of A
}
else 
{
return ++sign;   //go with the sequence 
}
}






