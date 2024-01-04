#include<stdio.h>
#define burger_price 5.99
#define pizza_price 7.99
#define salad_price 4.49
#define pasta_price 8.99
#define soda_price 1.99


int main ()
{
int quan,choice1;
float totalbill=0;
char choice;
do
{
printf("WELCOME TO OUR RESTURANT \n");
printf("HERE IS THE MENU  \n");
printf("1) BURGER PRICE  $%.2f\n",burger_price);
printf("2)  PIZZA PRICE  $%.2f\n",pizza_price);
printf("3) SALAD PRICE  $%.2f\n",salad_price);
printf("4) PASTA PRICE  $%.2f\n",pasta_price);
printf("5) SODA PRICE  $%.2f\n", soda_price);

printf("ENTER THE NUM OF ITEM YOU WANT  \n");
scanf(" %d",&choice1);
printf("ENTER THE QUANTITY   \n");
scanf("%d",&quan);

switch(choice1)
{
case 1:
{
totalbill+=quan*burger_price;
printf("BURGER  ADDED TO YOUR ORDER  \n");
break;
}
case 2:
{
totalbill+=quan*pizza_price;
printf("PIZZA  ADDED TO YOUR ORDER  \n");
break;
}
case 3:
{
totalbill+=quan*salad_price;
printf("SALAD  ADDED TO YOUR ORDER  \n");
break;
}
case 4:
{

totalbill+=quan*pasta_price;
printf("PASTA  ADDED TO YOUR ORDER  \n");
break;
}
case 5:
{
totalbill+=quan*soda_price;
printf("SODA  ADDED TO YOUR ORDER  \n");
break;
}
}


printf("DO YOU WNAT TO ORDER MORE [Y/N]  \n");
scanf(" %c",&choice);
}

while(choice=='Y' || choice=='y');
printf("TOTAL BILL : %.2f \n",totalbill);

return 0;
}





