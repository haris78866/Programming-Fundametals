#include<stdio.h>


int main()
{
int n,i,j;

printf("ENTERTHE TOTAL NUM OF SUDENT \n");
scanf("%d",&n);

char num[n][100];
char name[n][100];
char father_name[n][100];
int class[n];

for(i=0;i<n;i++);
 {
 printf("enter student num \n");
 scanf("%d",&num[i]);
 
 
 printf("enter student name \n");
 fgets(name[i],sizeof(name[i]),stdin);
 
 printf("enter student father name  \n");
 fgets(father_name[i],sizeof(father_name[i]),stdin);
 
 printf("enter student classs \n");
 scanf("%d",&class);
 
 }
 
 
         printf("student informstion \n");
 printf("stu num \t name \t father name \t  class");
 for(i=0;i<n;i++)
 {
 
 printf("%s\t %s \t %s \t %d",num[i],name[i],father_name[i],class[i]);
 }
 return 0;
 }
 
 
 
 

