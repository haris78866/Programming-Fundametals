#include <stdio.h>
void check(int first_book,int last_book,int skip,int sum);

int main()
{
int first_book,last_book,skip,sum=0;
printf("enter  first book in shelf: ");
scanf("%d",&first_book);
printf("enter last book in the shelf: ");
scanf("%d",&last_book);
printf("enter books you want to skip: ");
scanf("%d",&skip);

check(first_book,last_book,skip,sum);
}

void check(int first_book,int last_book,int skip,int sum)
{
for( ;first_book<=last_book;first_book+=skip+1)
{
sum+=first_book;
}
printf("sum=%d\n",sum);
}

