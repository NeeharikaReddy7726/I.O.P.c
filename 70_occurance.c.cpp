
// PROGRAM TO READ AN ARRAY AND PRINT OCCURANCE OF A PARTICULAR ELEMENT

#include <stdio.h>

int main() {
    int n, i;
    char element;
    int count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    char arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); 
    }

    printf("Enter the element to find its occurrence: ");
    scanf(" %c", &element); 

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    printf("The element %c occurs %d times in the array\n", element, count);

    return 0;
}

