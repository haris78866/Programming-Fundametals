#include<stdio.h>
float obtain(float math,float sci,float eng);
float per(float ob);

int main ()
{
float id,math,eng,sci,id2,math2,eng2,sci2,id3,math3,eng3,sci3;
printf("enter your id \n");
scanf("%f",&id);
printf("enter your eng marks \n");
scanf("%f",&eng);
printf("enter your sci marks \n");
scanf("%f",&sci);
printf("enter your math marks  \n");
scanf("%f",&math);
printf("your id is %f\n",id);
printf("your math marks  is %f\n",math);
printf("your sci marks  is %f\n",sci);
printf("your eng marks is  %f\n",eng);

float ob=obtain(math,eng,sci);
printf("your obtained marks is %f",ob);
printf("your percentage is %f ",per(ob));

printf("enter your id \n");
scanf("%f",&id2);
printf("enter your eng marks \n");
scanf("%f",&eng2);
printf("enter your sci marks \n");
scanf("%f",&sci2);
printf("enter your math marks  \n");
scanf("%f",&math2);
printf("your id is %f\n",id2);
printf("your math marks  is %f\n",math2);
printf("your sci marks  is %f\n",sci2);
printf("your eng marks is  %f\n",eng2);

float ob2=obtain(math2,eng2,sci2);
printf("your obtained marks is %f",ob2);
printf("your percentage is %f ",per(ob2));

printf("enter your id \n");
scanf("%f",&id3);
printf("enter your eng marks \n");
scanf("%f",&eng3);
printf("enter your sci marks \n");
scanf("%f",&sci3);
printf("enter your math marks  \n");
scanf("%f",&math3);
printf("your id is %f\n",id3);
printf("your math marks  is %f\n",math3);
printf("your sci marks  is %f\n",sci3);
printf("your eng marks is  %f\n",eng3);

float ob3=obtain(math3,eng3,sci3);
printf("your obtained marks is %f",ob3);
printf("your percentage is %f ",per(ob3));

return 0;
}

float obtain(float math,float sci,float eng)
{
return math+eng+sci;
}

float per(float ob)
{
return (ob/300)*100;
}
