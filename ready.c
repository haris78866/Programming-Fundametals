#include <stdio.h>
int find_last_occurrence(int arr[], int size) ;




int main() {
    int arr[] = {4, 8,2,0,8,6,8,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int last_occurrence = find_last_occurrence(arr, size);
    printf("The last occurrence of the largest element is at index %d.\n", last_occurrence);

    return 0;
}

int find_last_occurrence(int arr[], int size) 
{
    int max = arr[0];
    int last_occurrence = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            last_occurrence = i;
        }
    }

    return last_occurrence;
}


