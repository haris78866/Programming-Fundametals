#include<stdio.h>
#define row 4
#define col 3

int main ()
{
int arr[row][col],i,j;


printf("ENTER THE ELEMNET  OF MATRIX \n");

for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  scanf("%d",&arr[i][j]);
 }
}
 
 printf("ENTERED  MATRIX IS  \n");

for(i=0;i<row;i++)
  {
  printf("\n");
  for(j=0;j<col;j++)
  {
  printf("arr[%d][%d]=\t%d",i,j,arr[i][j]);
 }
}


int smallest=arr[0][0];

for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
  if(arr[i][j]<smallest)
  {
  smallest=arr[i][j];
 }
}

printf("THE SMALLEST ELEMNET \n");


for(i=0;i<row;i++)
  {
  printf("\n");
  for(j=0;j<col;j++)
  {
  ;
 }
}
printf("%d \t",smallest);

return 0;
}
}


 







