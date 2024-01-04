#include<stdio.h>
int studis(int baseamount);
int seniordis(int baseamount,int age );
int memberdis(int baseamount,int month);
int sessiondis(int baseamount,int session);
int main ()
{
int baseamount=150,month,age,session;
char stu;

printf("enter y if you are the student else n\n");
scanf("%c",&stu);
printf("enter your age \n");
scanf("%d",&age);
printf("enter the month you want to pay \n");
scanf("%d",&month);
printf("enter the no of how many session you wannt\n");
scanf("%d",&session);


if (stu=='y')
{
printf("total %d \n", studis( baseamount));
}
if (age>50)
{
printf(" total %d \n", seniordis( baseamount, age));
}
if (month>=12)
{
printf(" total %d \n", memberdis(baseamount, month));
}
if (session>5)
{
printf("total %d \n",sessiondis(baseamount,session));

return 0;
}


int studis(int baseamount)
{
return 40/100*baseamount;
}
int seniordis(int baseamount,int age )
{
return 30/100*baseamount;
}
int memberdis(int baseamount,int month)
{
return  15/100 *(month*baseamount);
}
int sessiondis(int baseamount,int session)
{
return 20/100*(baseamount*session);
}
}




