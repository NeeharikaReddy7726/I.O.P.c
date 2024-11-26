// SWAPPING TWO VARIABLES USING THIRD VARIABLE
#include <stdio.h>

int main() {
    int a, b, c;

    // Input values for a and b
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    // Displaying original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    c= a; // Store the value of a in c
    a = b;    // Assign the value of b to a
    b = c; // Assign the value of c (original a) to b

    // Displaying swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

