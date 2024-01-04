#include<stdio.h>


int square(int a)
{
return a*a;
}

int cube(int a)
{
return a*a*a;
}
int main(void)
{
int a;
printf("enter value of a\n");
scanf("%d",&a);

printf("square of a is %d=\n",square(a));
printf("cube value of a is %d=\n",cube(a));

return 0;
}
