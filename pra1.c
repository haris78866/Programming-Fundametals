#include<stdio.h>
int obmarks(int math,int sci,int cs ,int urdu,int eng);
float per(int math,int sci,int cs ,int urdu,int eng);
void grade(int math,int sci,int cs ,int urdu,int eng);


int main ()
{
int math,sci,cs,urdu,eng;

printf("enter your math marks\n");
scanf("%d",&math);
printf("enter your sci marks\n");
scanf("%d",&sci);
printf("enter your cs marks\n");
scanf("%d",&cs);
printf("enter your urdu  marks\n");
scanf("%d",&math);
printf("enter your english marks\n");
scanf("%d",&eng);

obmarks( math, sci, cs ,urdu, eng);
per(math, sci, cs , urdu, eng);
grade( math,sci, cs , urdu, eng);


return 0;
}

int obmarks(int math,int sci,int cs ,int urdu,int eng)
{
return math+sci+cs+urdu+eng;
}
float per(int math,int sci,int cs ,int urdu,int eng)
{
float per;
per=(math+sci+cs+urdu+eng)/500*100;
return per;
}
 
void grade(int math,int sci,int cs ,int urdu,int eng)
{
float  perc=(math+sci+cs+urdu+eng)/500*100;
if (perc>=90)
{
printf("a \n");
}
else if(80>=89)
{
printf("b \n");
}
else if (70>=79)
{
printf("c \n");
}
else if(60>=69)
{
printf("d\n");
}
else 
{
printf("f \n");
}

}




























