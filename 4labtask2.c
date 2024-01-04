#include <stdio.h>

int main()
{
    int x;

    
    printf("Enter an integer: ");
    scanf("%d", &x);

    // Calculate and display the absolute value using the custom function
    int result = myAbsolute(x);
    printf("The absolute value of %d is %d\n", x, result);

    return 0;
}
int myAbsolute(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}
