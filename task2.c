#include<stdio.h>
int main ()
{
float kg,aceleration,force;
printf("enter mass in kg");
scanf("%f",&kg);
printf("enter acceleration");
scanf("%f",&aceleration);
force=kg*aceleration;
printf("force= %.2f",force);
}
