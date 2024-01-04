#include<stdio.h>


int getprefix(int count)
{
count=++count;
return count;
}

int getpostfix(int count)
{
count=count++;
return count;
}

int main(void)
{
int count=0;

printf("the prefix of increment is %d=\n",getprefix(count));
printf("the postfix of increment is %d=\n",getpostfix(count));


return 0;
}
