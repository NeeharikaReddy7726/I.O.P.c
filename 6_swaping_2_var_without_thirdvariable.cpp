// SWAPPING TWO VARIABLES WITHOUT USING THIRD VARIABLE 
#include <stdio.h>

int main() {
    int a, b;

    // Input values for a and b
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    // Displaying original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using arithmetic operations
    a = a + b; // Step 1: a now contains the sum of a and b
    b = a - b; // Step 2: b now contains the original value of a
    a = a - b; // Step 3: a now contains the original value of b

    // Displaying swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

