// READ NO'S UNTIL A NEGATIVE IS ENTERED AND CLACULATE SUM OF LIST OF NUMBERS READ

#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Enter numbers to sum up (enter a negative number to stop):\n");

    while (1) {
        // Read input from the user
        printf("Enter a number: ");
        scanf("%d", &number);

        // Check if the entered number is negative
        if (number < 0) {
            break; // Exit the loop if a negative number is entered
        }

        // Add the number to the sum
        sum += number;
    }

    // Print the total sum
    printf("The sum of the numbers entered is: %d\n", sum);

    return 0;
}
