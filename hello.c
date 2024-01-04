#include<stdio.h>
#define r 2
#define c 2

void mul(int arr1[r][c], int arr2[r][c],int l[r][c]);
int main() {
 
int arr1[r][c],arr2[r][c],l[i][j];
int i,j;
 
for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     scanf("%d",&arr1[i][j]);
    }
   }
   
   for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     scanf("%d",&arr2[i][j]);
    }
   }
   
  for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     printf("%d \t",arr1[i][j]);
    }
   }
   
   for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     printf("%d \t",arr2[i][j]);
    }
   }
   
    mul(arr1,arr2,l);
   
   for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     printf("%d \t",l[i][j]);
    }
    printf("\n");
   }
   
       
    return 0;
}


void mul(int arr1[r][c], int arr2[r][c],int l[r][c])
{

 int i,j,k;
 
for(i=0;i<r;i++){
   for(j=0;j<c;j++){
   l[i][j]=0;
   for(k=0;k<r;k++)
   {
   l[i][j]+=arr1[i][k]*arr2[k][j];
    }
   }
   }
}   








