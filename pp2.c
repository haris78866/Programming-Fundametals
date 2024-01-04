#include<stdio.h>
float calculate(float,float);

int main()
{
printf("Welcome to the coffee shop!\n");
printf("Here is the menu\n");

float esp=2.50,latte=3.00,cappu=3.50,mocha=4.00,americano=2.25;

printf("1=Espresso : %.2f$\n",esp);
printf("2=Latte: %.2f$\n",latte);
printf("3=Cappuccino : %.2f$\n",cappu);
printf("4=Mocha : %.2f$\n",mocha);
printf("5=Americano: %.2f$ \n",americano);


float quantity;
int choice;
printf("Please select your coffee by entering the number\n");
scanf("%d",&choice);

printf("Enter the quantity");
scanf("%f",&quantity);







switch (choice) 
{
case 1: 
{
printf("You have selected %.0f Espresso.That will be %.2f$\n",quantity,calculate(esp,quantity));
break;}
case 2:
{
printf("You have selected %.0f Latte.That will be %.2f$",quantity,calculate(latte,quantity));
break;}
case 3:
{
printf("You have selected %.0f Cappucino.That will be %.2f$",quantity,calculate(cappu,quantity));
break;}
case 4 :
{
printf("You have selected %.0f Mocha.That will be %.2f$",quantity,calculate(mocha,quantity));
break;}
case 5 :
{
printf("You have selected %.0f Americano.That will be %sss.2f$,",quantity,calculate(americano,quantity));
}








}




}
float calculate(float choice,float quantity) {
return choice*quantity;
}
