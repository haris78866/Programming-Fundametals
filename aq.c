#include <stdio.h>

float toyota();
float suzuki();
float honda();
float total(char userName[10], char userName2[10], int age, float total1, float total2, float total3);

int main()
{
    int choice, n, age;
    float total1 = 0, total2 = 0, total3 = 0;
    char userName[10], userName2[10];
    char YorN;
    do
    {
        printf("\t\t\tHello! Welcome to HABSHI CAR RENTAL SYSTEM\n\n");

        printf("\t\t--User Info.--\n");
        printf("\tEnter first name:");
        scanf("%s",&userName[10]);
        getchar();
        printf("\tEnter Last Name:");
        scanf("%s",&userName2[10]);
        getchar();
        printf("\t(Enter the valid age or program will end)\n");
        printf("\t(You should be 18+ TO rent a car)\n");
        printf("\tEnter your age:");
        scanf("%d",&age);
        if (age < 18 && age>0)
        {
            printf("\tNot Eligible to rent a car\n");
            printf("\tExiting...");
            return 0;
        }
        else if(age>100 || age<0){
        printf("\tInvalid Age\n");
        printf("\tExiting...\n");
            return 0;
        }
        else if (age >= 18 && age <= 100)
        {
            do
            {

                printf("\t\t\tCARS BRAND AVAILABLE \n\n");
                printf("\t 1) TOYOTA  \n");
                printf("\t 2) SUZUKI  \n");
                printf("\t 3) HONDA   \n");
                printf("\t 0) EXIT & PRINT BILL   \n");
                printf("\t ENTER YOUR CHOICE :\n\t");
                
				scanf("%d", &choice);
				
                switch (choice)
                {
                case 1:
                {
                    
                    total1 += toyota();
                    printf("\tEnter\n\tY for YES(Main Menu)\n\tN for NO(Print Bill)\n\t");
                    scanf(" %c", &YorN);
                    if (YorN == 'Y' || YorN == 'y')
                    {
                        continue;
                    }
                    else if (YorN == 'N' || YorN == 'n')
                    {
                    total(userName, userName2, age, total1, total2, total3);
                        return 0;
                    }
                    break;
                }
                
                case 2:{
				
                    total2 += suzuki();
                    printf("\tEnter\n\tY for YES(Main Menu)\n\tN for NO(Print Bill)\n\t");
                    scanf(" %c", &YorN);
                    if (YorN == 'Y' || YorN == 'y')
                    {
                        continue;
                    }
                    else if (YorN == 'N' || YorN == 'n')
                    {
                    total(userName, userName2, age, total1, total2, total3);
                        return 0;
                    }
                }
              
                    break;
                case 3:{
				
                    total3 += honda();
                    printf("\tEnter\n\tY for YES(Main Menu)\n\tN for NO(Print Bill)\n\t");
                    scanf(" %c", &YorN);
                    if (YorN == 'Y' || YorN == 'y')
                    {
                        continue;
                    }
                    else if (YorN == 'N' || YorN == 'n')
                    {
                    total(userName, userName2, age, total1, total2, total3);
                        return 0;
                    }
                }
              
				    break;
                case 0:
                    printf("\t\tExiting customer portal.\n");
                    printf("\n\n");
                    printf("\t\tRECEIPT\n");
                    total(userName, userName2, age, total1, total2, total3);
                    return 0;
                default:
                    printf("\t\tINVALID INPUT!!!\n\t\tPLEASE CHECK YOUR CHOICE!!!! \n ");
                    break;
                }
                printf("\n");

            } while (choice != 0);
        }
    } while (n != 0);

    printf("\t\tInvalid Input\n\t\tCHECK OUT HABSHI CAR RENTAL SYSTEM.\n");
    return 0;
}

float toyota()
{
    float Corolla = 40.0, Prius = 60.0, Vitz = 35.0, Camry = 45.0;
    int choice;
    int hours;
    float total1 = 0;
    do
    {
        printf("\t\t\t\t\t---TOYOTA CARS AVAILABLE---\n\n");
        printf("\t\t\t--CARS AVAILABLE--\t--RATE/HOUR--\n\n");
        printf("\tPress 1: 		Corolla : 	(%.1f$/hr)\n", Corolla);
        printf("\tPress 2: 		Prius   : 	(%.1f$/hr)\n", Prius);
        printf("\tPress 3: 		Vitz    : 	(%.1f$/hr)\n", Vitz);
        printf("\tPress 4: 		Camry   : 	(%.1f$/hr)\n", Camry);
        printf("\tPress 0: 		Return(Main Menu)\n\t");
        printf("ENTER YOUR CHOICE \n\t");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {

            char YorN;
            printf("\tYou have booked -TOYOTA COROLLA-\n");

            do
            {
                printf("\tEnter the number of hours to rent: ");
                scanf("%d", &hours);
                
                if (hours < 0)
                    printf("Invalid Input");

            } while (hours < 0);

            total1 += hours * Corolla;
            break;
        }
        case 2:
            printf("\tYou have booked -TOYOTA PRIUS-\n");
            printf("\tEnter the number of hours to rent: ");
            scanf("%d", &hours);
            total1 += hours * Prius;
            break;

        case 3:
            printf("\tYou have booked -TOYOTA VITZ-\n");
            printf("\tEnter the number of hours to rent: ");
            scanf("%d", &hours);
            total1 += hours * Vitz;
            break;

        case 4:
            printf("\tYou have booked -TOYOTA CAMRY-\n");
            printf("\tEnter the number of hours to rent: ");
            scanf("%d", &hours);
            total1 += hours * Camry;
            break;

        case 0:
            printf("BACK TO THE MAIN MENU \n\n");
            break;
        default:
            printf("\tINVALID CHOICE \n\n");
        }
        break;
    } while (choice != 0);
    return total1;
}

float suzuki()
{
    float Bolan = 40.0, mehran = 60.0, fx = 35.0, cultus = 45.0;
    int choice;
    int hours;
    float total2 = 0;
    do
    {
        printf("\t\t\t\t\t---SUZUKI CARS AVAILABLE---\n\n");
        printf("\t\t\t--CARS AVAILABLE--\t--RATE/HOUR--\n\n");
        printf("\tPress 1: 		BOLAN : 	(%.1f$/hr)\n", Bolan);
        printf("\tPress 2: 		MEHRAN   : 	(%.1f$/hr)\n", mehran);
        printf("\tPress 3: 		FX    : 	(%.1f$/hr)\n", fx);
        printf("\tPress 4: 		CULTUS   : 	(%.1f$/hr)\n", cultus);
        printf("\tPress 0: 		Return(Main Menu)\n");
        printf("\tENTER YOUR CHOICE \n\t");

        scanf("%d", &choice);
        switch (choice)
        {
        
			case 1:
				printf("\tYou have booked -SUZUKI BOLAN-\n");
				printf("\tEnter the number of hours to rent: ");
				scanf("%d",&hours);
				total2+=hours*Bolan;
		       break;
			       
		       case 2:
				printf("\tYou have booked -SUZUKI MEHRAN-\n");
				printf("\tEnter the number of hours to rent: ");
				scanf("%d",&hours);
				total2+=hours*mehran;
		      break;
			
		      case 3:
				printf("\tYou have booked -SUZUKI FX-\n");
				printf("\tEnter the number of hours to rent: ");
				scanf("%d",&hours);
				total2+=hours*fx;
		      break;
			
		      case 4:
				printf("\tYou have booked -SUZUKI CULTUS-\n");
				printf("\tEnter the number of hours to rent: ");
				scanf("%d",&hours);
				total2+=hours*cultus;
		      break;
			
		     
								
			case  0:
				printf("BACK TO THE MAIN MENU \n\n");
				break;
			default:
			   printf("\tINVALID CHOICE \n\n");
		}        break;
	}
	while(choice!=0);
	return total2;
    
}

float  honda()
{
float civic=40.0, accord=60.0, city=35.0, brv=45.0;
	int choice;
	int hours;
	float total3=0;
	do{
		printf("\t\t\t\t\t---TOYOTA CARS AVAILABLE---\n\n");
		printf("\t\t\t--CARS AVAILABLE--\t--RATE/HOUR--\n\n");
		printf("\tPress 1: 		CIVIC : 	(%.1f$/hr)\n",civic);
		printf("\tPress 2: 		ACCORD   : 	(%.1f$/hr)\n",accord);
		printf("\tPress 3: 		CITY    : 	(%.1f$/hr)\n",city);
		printf("\tPress 4: 		BR-V   : 	(%.1f$/hr)\n",brv);
		printf("\tPress 0: 		Return(Main Menu)\n");
		printf("\tENTER YOUR CHOICE \n\t");

		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\tYou have booked -HONDA CIVIC-\n");
				printf("\tEnter the number of hours to rent: ");
				scanf("%d",&hours);
				total3+=hours*civic;
		       break;
			       
			       
		       case 2:
				printf("\tYou have booked -HONDA ACCORD-\n");
				printf("\tEnter the number of hours to rent: ");
				scanf("%d",&hours);
				total3+=hours*accord;
		      break;
			
		      case 3:
				printf("\tYou have booked -HONDA CITY-\n");
				printf("\tEnter the number of hours to rent: ");
				scanf("%d",&hours);
				total3+=hours*city;
		      break;
			
		      case 4:
				printf("\tYou have booked -HONDA BR-V-\n");
				printf("\tEnter the number of hours to rent: ");
				scanf("%d",&hours);
				total3+=hours*brv;
		      break;
			
		     
								
			case  0:
				printf("BACK TO THE MAIN MENU \n\n");
	               break;
			default:
			   printf("\tINVALID CHOICE \n\n");
		}        break;
	}
	while(choice!=0);
	return total3;
}    

float total(char userName[10], char userName2[10], int age, float total1, float total2, float total3)
{
    float add;
    add = total1 + total2 + total3;
    printf("\t\t---CONFIRMATION RECEIPT--- \n");

    printf("\tCUSTOMER's FIRST NAME : %s\n", userName);
    printf("\tCUSTOMER's LAST NAME  : %s\n\n", userName2);
    printf("\tDESCRIPTION    \t\t   TOTAL \n\n");
    printf("\tTOYOTA         \t\t   $%.2f \n", total1);
    printf("\tSUZUKI         \t\t   $%.2f \n", total2);
    printf("\tHONDA          \t\t   $%.2f \n\n", total3);
    printf("\tTOTAL BILL     \t\t   $%.2f \n", add);
    return 0;
}
