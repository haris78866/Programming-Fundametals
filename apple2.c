#include<stdio.h>
float obtain(float math,float sci, float eng);
float per(float ob);
int main()
{
float id,math,eng,sci,id1,math1,eng1,sci1,id2,math2,eng2,sci2;

printf("enter id of student=");
scanf("%f", &id);
printf("enter marks of math=");
scanf("%f", &math);
printf("enter marks of  sci= ");
scanf("%f",&sci);
printf("enter marks of eng");
scanf("%f",&eng);
float ob=obtain(math,sci, eng);
printf("obtain marks is %f\n",ob);
printf(" the  per of std is %f\n",per(ob));

printf("enter id1 of student");
scanf("%f", &id1);
printf("enter marks of math1=");
scanf("%f", &math1);
printf("enter marks of  sci1= ");
scanf("%f",&sci1);
printf("enter marks of eng1=");
scanf("%f",&eng1);
float ob1=obtain(math1,sci1, eng1);
printf("obtain marks is %f\n",ob1);
printf(" the  per of std is %f\n",per(ob1));

printf("enter id2 of student=");
scanf("%f", &id2);
printf("enter marks of math2=");
scanf("%f", &math2);
printf("enter marks of  sci2= ");
scanf("%f",&sci2);
printf("enter marks of eng2=");
scanf("%f",&eng2);
float ob2=obtain(math2,sci2, eng2);
printf("obtain marks is %f\n",ob2);
printf(" the  per of std is %f",per(ob2));
return 0;
}


float obtain(float math,float sci, float eng)
{
float obtain;
obtain=math+sci+eng;
return obtain;
}



float per(float ob)
{
return (ob/300)*100;
}





