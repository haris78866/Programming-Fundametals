#include<stdio.h>


int main ()
{
int team1=0,wickets1=0,choice,points,out;

for(;;)
{
printf("\tSCORE BOARD\n");
printf("team1\t %d\n",team1);
printf("\twickets %d\n",wickets1);
printf("\tOPTION \n");
printf("1 : upadate team1 score\n");
printf("2 : update team1 wickets\n");
printf("3 : QUIT \n");
printf("press any choice \n");
scanf("%d",&choice);

switch (choice) {
            case 1:
                printf("Enter score for Team 1: ");
                scanf("%d", &points);
                team1+= points;
                
                break;
           case 2:
              
                if (wickets1 < 9) {
                    printf("Enter wickets : ");
                    scanf("%d", &out);
                    wickets1 += out;
                } else {
                    return 0;
                }
                break; 
            case 3:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid \n");
        }
    }

    return 0;
}









