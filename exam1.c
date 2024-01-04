#include<stdio.h>
int time(int totalseconds,int hours,int minutes,int remaining_sec);

int main(void)
{
hours=totalseconds/3600;
return hours;
}

int main(void)
{
remaining_sec=totalseconds%60;
minutes=remaining_sec/60;
return minutes;
}

int main(void)
{
remaining_sec=remaining_sec%60;
return remaining_sec;
}

int main()
{
int hours,minutes,totalseconds,remaining_sec;
printf("enter total seconds ");
scanf("%f",&totalseconds);

printf("%d totalseconds ,%dHours is , %f minutes is ,%dsec is  =\n",time(totalseconds,hours,minutes,remaining_sec));
return 0;
}
