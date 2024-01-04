#include<stdio.h>
int main()
{
int age;
printf("enter age of the person\n");
scanf("%d",&age);

if (age<=12)
{
printf("child\n");
}
else if (age>=13 && age<=19)
{
printf("teenager\n");
}
else if (age>=20 && age<=64)
{
printf("adult\n");
}
else 
{
printf("oldest\n");
}
return 0;
}


