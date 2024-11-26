// PROGRAM TO PERFORM LINEAR SEARCH
#include <stdio.h>


int linearSearch(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {  
            return i;
        }
    }
    return 1;  // Return -1 ifelement is not found in the array
}

int main() {
    int array[100], size, element, index;

    printf("Enter the number of elements in the array:\n ");
    scanf("%d", &size);  

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);  
    }

    printf("Enter the element to search:\n ");
    scanf("%d", &element);
    
    index = linearSearch(array, size, element);

    //  result
    if (index != 1) {
        printf("Element %d found at index %d.\n", element, index);
    } else {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}

