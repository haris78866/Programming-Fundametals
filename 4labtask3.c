#include<stdio.h>
#include<math.h>


int main ()
{
float x1,x2,y1,y2,x,distance;

printf("enter cordinate x1\n");
scanf("%f",&x1);
printf("enter cidinate x2\n");
scanf("%f",&x2);
printf("enter cordintae y1\n");
scanf("%f",&y1);
printf("enter cordinate y2\n");
scanf("%f",&y2);
x=((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
distance=sqrt(x);
printf("distance b/w point is %f",distance);
return 0;
}

