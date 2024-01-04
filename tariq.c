#include <stdio.h>

int main() {
    int ob, total;
    float per; // Use float for percentage to allow decimal values

    printf("ENTER YOUR TOTAL MARKS");
    scanf("%d", &total);

    printf("ENTER YOUR OBTAINED MARKS ");
    scanf("%d", &ob);

    per = ((float)ob / total) * 100; // Calculate percentage as a float

    char grade; // Declare grade variable

    switch ((int)(per / 5)) { // Convert per to int for the switch condition
        case 18:
        case 19:
        case 20:
        case 17:
        case 16:
            grade = 'A';
            break;
        case 15:
        case 14:
        case 13:
            grade = 'B';
            break;
        case 12:
        case 11:
        case 10:
            grade = 'C';
            break;
        case 9:
        case 8:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }

    printf("Percentage: %.2f\n", per);
    printf("Grade: %c\n", grade);
    return 0;
}

