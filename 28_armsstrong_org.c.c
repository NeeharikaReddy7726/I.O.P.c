//TO CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT

#include <stdio.h>
#include <math.h>

//  function to count the number of digits in a number
int countdigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}

// Defination of armstrong number
// armstrong number is the number equal to sum of its digits raised to power of number of digits

// function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int originalNum = n;
    int digits = countigits(n);
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return sum == originalNum;
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

