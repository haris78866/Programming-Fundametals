#include<stdio.h>
float jobpays( hours);
float tax( hours);
float moneyclth(aftertax);
float schoolsuplies(float aftertax);
float savingbook(float aftertax);
float addsaving(float aftertax);
int main()
{
int hours;
float a,b,aftertax;
printf("enter working hours \n");
scanf("%d",hours);
printf("income before taxes is %f\n", jobpays( hours)); // income before tax 
printf("taxes  he pay is %f\n", tax(hours));
//store value into a , b and beforetax 
 a=jobpays(hours);
 b= tax(hours);
aftertax=a-b;

// function calling nad displying on the screen 
printf("the sallay after taxes is %f\n",aftertax);
printf("the money spent on clothes  is %f\n",moneyclth(aftertax));
printf("the money spent on school sulimentry  is %f\n",schoolsuplies(aftertax));
printf("the money saving for books  is %f\n", savingbook(aftertax));
printf("the money saving for books  is %f\n", addsaving(aftertax));


return 0;
}

// function 
float jobpays(int hours)
{
return hours*15.50; // job pays working per hour 15.50
}

float tax(int  hours)
{
int x=jobpays( hours);
return x*0.14;
}
float moneyclth(float aftertax)
{
return 0.10*aftertax;
}
float schoolsuplies(float aftertax)
{
return 0.01*aftertax;
}

float savingbook(float afteretax)
{
return aftertax*0.25;
}
float addsaving(float aftertax)
{
return after*0.25;
}






