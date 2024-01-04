#include<stdio.h>
#define teleportation_portals_use 30
#define spaceship_cost 200
#define  spaceship_cost_peruse  5
int teleportationcost(int teleportationportlals);
int spaceshipcost(int spaceships,int distance );
int totalexpense(int spaceship,int distance,int teleportationportals);



int main (void)
{
int teleportationportals,spaceships,distance;

printf("enter the numbers of telertation portals \n");
scanf("%d",&teleportationportals);

printf(" enter the num of spaceship \n ");
scanf ("%d",&spaceships);

printf("  enter the  spaceship distance ( mile) \n ");
scanf ("%d",&distance);
int totalcost=totalexpense( spaceships,distance, teleportationportals);
printf("the total cost is %d\n",totalcost);




return 0;
}

int teleportationcost(int teleportationportals)
{
return teleportation_portals_use * teleportationportals;
}
int spaceshipcost(int spaceships,int distance )
{
return (spaceship_cost * spaceships + spaceship_cost_peruse * distance);
}
int totalexpense(int spaceships,int distance,int teleportationportals)
{
int    totalteleportexpense=teleportationcost( teleportationportals);
int      spacecost=spaceshipcost(spaceships,distance );
return   totalteleportexpense+spacecost;
}
















































