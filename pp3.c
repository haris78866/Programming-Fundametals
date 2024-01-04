#include<stdio.h>
#define espo 2.50
#define latte 3.00
#define cappucino 3.50
#define mocha 4.00
#define americano 2.25
float calbill(int,float);
int main () {

int choice,quantity;

printf("WELCOME TO THE COFEE SHOP \n");
printf("HERE ARE THE CHOICE  \n");
printf("1) ESPRESSO : $%.2f \n",espo);
printf("2)LATTE : $%.2f \n",latte);
printf("3) cappucino : $%.2f \n",cappucino);
printf("4)MOCHA : $%.2f \n",mocha );
printf("5)  AMERICANO : $%.2f \n",americano);
printf("ENTER YOUR FAVOURITE NUMBER  \n");
scanf("%d",&choice);
printf("ENTER THE QUANTITY \n");
scanf("%d",&quantity);

switch(choice)
{
case 1:
{
printf("you have slected %.2d espressoo . That will be $%.2f ,please \n",quantity,calbill(quantity,espo));
printf("ENJOY YOUR COFFEE \n");
break;
}
case 2:
{
printf("you have slected %.2d latte . That will be $%.2f ,please \n",quantity,calbill(quantity,latte));
printf("ENJOY YOUR COFFEE \n");
break;
}
case 3:
{
printf("you have slected %.2d cappcuino . That will be $%.2f ,please \n",quantity,calbill(quantity,cappucino));
printf("ENJOY YOUR COFFEE \n");
break;
}
case 4:
{
printf("you have slected %.2d mocha . That will be $%.2f ,please \n",quantity,calbill(quantity,mocha));
printf("ENJOY YOUR COFFEE \n");
break;
}
case 5:
{
printf("you have slected %.2d americano . That will be $%.2f ,please \n",quantity,calbill(quantity,americano));
printf("ENJOY YOUR COFFEE \n");
break;
}
default:
{
printf("soorry the choice is invalid \n");
}
return 0;
}
}

float calbill(int quantity,float choice)
{
float total;
total=choice*quantity;
return total;
}


















