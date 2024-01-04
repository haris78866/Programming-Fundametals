#include<stdio.h>


int main()
{
int baseamount=150;



return 0;
}

int seniordiscount(int baseamount)
{
int age,totaldis;
printf("enter you age \n");
scanf("%d",&age);
if (age >50)
{

}
return 0;
}

int student(int baseamount)
{
char stu;
float studis,totaldis;
int age;
printf("enter y for a student n for not\n");
scanf("%c",&stu);
if (stu=='y')
{
studis=40/100*baseamount;
printf("discount for student is %f\n",studis);
}
else if (stu=='n')
{
printf("enter your age \n");
scanf(%d",&age);
if (age>50)
{
totaldis=50/100*baseamount;
printf("discount for senior citizen is %f\n",totaldis);
}
return 0;
}

int member(int baseamount)
{
int month ;
int memberdis,notmember;
printf("enter the no of month \n");
scanf("%d",&month);
 
 if (month>=12)
 {
 memeberdis=15/100*baseamount;
 printf("discount for you bcz you bought the membership\n",memberdis);
 }
 else if(month<12)
 {
 notmember=month*baseamount;
  printf("total base amunt \n",notmember);
  }
  
 
 return 0;
 }
 
 int session( int baseamount)
 {
int month ,sessiondis;
printf("enter the no of personal traning session \n");
scanf("%d",&month);

if ( month >5)
{
sessiondis=20/100*150;
printf("discount on each session is %d \n",sessiondis);
}
return 0;
}



























