#include<stdio.h>
int main ()
{
char name1,name2,name3,name4,name5,name6,name7,name8;
int price,quantity;
int totalbill=0;

printf("enter you name ");
scanf("%c%c%c%c%c",&name1,&name2,&name3,&name4,&name5);
/*
printf("enter the product you want \n");
scanf("%c%c%c",&name6,&name7,&name8);*/

printf("whats your price range \n");
scanf("%d",&price);

printf("how many product you wannt\n");
scanf("%d",&quantity);

totalbill+=price*quantity;

printf(" Apple Store \n");
printf("name : %c%c%c%c%c\n",name1,name2,name3,name4,name5);
printf("product\tprice\tquantity\n");
printf("%c%c%c\t%d\t%d\t\n",name6,name7,name8,price,quantity);
printf("totalbill : %d\n",totalbill); 
printf("thanks for shooping");

}


