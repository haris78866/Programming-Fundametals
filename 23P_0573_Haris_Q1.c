#include<stdio.h>
int formulaOne_car1(int power1,int speed1);
int formulaOne_car2(int power2,int speed2);
int formulaTow_car1(int efficency1) ;
int formulaTwo_car2(int efficency2) ;

int main(void)
{
int power1,speed1,efficency1,power2,speed2,efficency2;

// taking input speed.power,efficency for car1
printf("enter the power of the car1\n");             
scanf("%d",&power1);
printf("enter the speed of the car1\n");
scanf("%d",&speed1);
printf("enter the efficency of the car1\n");
scanf("%d",&efficency1);

int car1_performance=formulaOne_car1( power1, speed1)+formulaTow_car1( efficency1);  // car1 performnace 
printf("Car1  performance = %d \n",car1_performance);    //display car1 performnace 

// taking input speed,power,efficency for car2  

printf("enter the power of the car2\n");
scanf("%d",&power2);
printf("enter the speed of the car2\n");
scanf("%d",&speed2);
printf("enter the efficency of the car2\n");
scanf("%d",&efficency2);
int car2_performance= formulaOne_car2(power2,speed2) +formulaTwo_car2(efficency2);    //car2 perfomance 
printf("Car2 performance = %d \n",car2_performance);    // display  car2performance 


int engines_overall_performance=car1_performance + car2_performance;       // overall performance of both cars(optimal power)
printf("Engines overall performance = %d \n",engines_overall_performance);//display overall performance of both cars(optimal power)
return 0;
}

int formulaOne_car1(int power1,int speed1)
{
return power1+speed1;                           //Total power output for car1 
}
int formulaOne_car2(int power2,int speed2)
{
return power2+speed2;                           //Total power output of car2
}

int formulaTow_car1(int efficency1)             //Engines efficecies at high of car1
{
return efficency1*efficency1;
}
int formulaTwo_car2(int efficency2)               //Engines efficecies at high of car2
{
return efficency2*efficency2;
}






























