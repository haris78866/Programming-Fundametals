#include <stdio.h>

int prime(int num);
void range(int m, int n);

int main() {
    int m, n;
    printf("Enter the first num ");
    scanf("%d", &m);
    printf("Enter the ending num");
    scanf("%d", &n);

    printf("Prime numbers between %d and %d are\n", m, n);

    range(m, n);

    return 0;
}

int prime(int num) {
    if (num <= 1) {
        return 0; 
    }
    if (num <= 3) {
        return 1; 
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; 
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }

    return 1; 
}

void range(int m, int n) 
{
    for (int i = m; i <= n; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

  
