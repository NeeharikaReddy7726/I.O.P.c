//  A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
 
#include <stdio.h>

int findLargest(int *arr, int n) {
    int largest = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > largest) {  
            largest = *(arr + i); 
        }
    }
    return largest;
}

int main() {
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);

    printf("The largest number is: %d\n", largest);

    return 0;
}

