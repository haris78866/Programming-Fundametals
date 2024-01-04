#include<stdio.h>
float area(float lenht,float width);
float charge(float cost,float lenght,float width );
float lab(float labcost,float lenght,float width);
float disco(float y);
float  tx(float x);

int main()
{
float lenght,width,discount,cost;
const float tax=8.5;
const float labcost=0.35;

printf("enter he lenght sqft\n");
scanf("%f",&lenght);
printf("enter the width in sqft\n");
scanf("%f",&width);
printf("enter the cost per  sqft\n");
scanf("%f",&cost);
printf("enter the coustomer discount \n");
scanf("%f",&discount);
printf("\t\tMEASUREMENT\n");
printf("\t\tMEASUREMENT\n");
printf("Lenght\t\t %f ft\n",lenght);
printf("width\t\t %f ft\n",width);
printf("Area\t\t %f sqft\n", area( lenght,width));
printf("\t\tCHARGES\n");
printf("DESCRIPTION\tCOST_SQFT\tCHARGE\n");
printf("Carpet\t%f\t%f \n ",cost,charge(cost, lenght, width));
printf("Labur\t%f\t%f \n ",labcost,lab(labcost,lenght, width));
printf("Instled-Price\t\t%f \n ",cost);
printf("Discount\t%f\t%f \n ",discount, disco( discount) );
printf("Subtotal\t\t%f \n ", disco( discount) );
printf("Tax\t%f\t%f \n ",tax,tx( tax));
printf("Toatal\t\t%f \n ",tx( tax));
float x=charge(cost, lenght,width);
float y=disco( discount);  
return 0;
}

float area(float lenght,float width)                      //1st function 
{
return lenght*width;
}

float charge(float cost,float lenght,float width)            //2nd funtion 
{
return lenght*width*cost;
}

float lab(float labcost,float lenght,float width)            //3rd function
{
return labcost*lenght*width;
}

float disco(float discount,float lenght,float cost,float x)                            //4th function 
{                                          //assigned to x
 return (x/100)*discount;
 }
 
 float  tx( float tax ,float y)                                       //5th function 
 {                    //assigned to y
return tax+y;
}








