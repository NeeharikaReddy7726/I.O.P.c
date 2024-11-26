//IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS 
LAST N DIGITS 

#include <stdio.h>
#include <math.h>

int flip(int number, int N) {
    int lastNDigits = 0;
    int originalNumber = number;
    int sign = 1;

    if (number < 0) {
        sign = -1;
        number = -number;
    }

    for (int i = 0; i < N; i++) {
        lastNDigits = lastNDigits * 10 + (number % 10);
        number /= 10;
    }

    int flippedDigits = 0;
    while (lastNDigits > 0) {
        flippedDigits = flippedDigits * 10 + (lastNDigits % 10);
        lastNDigits /= 10;
    }

    int result = number * pow(10, N) + flippedDigits;

    return sign * result;
}

int main() {
    int number, N;

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("Enter the number of digits to flip: ");
    scanf("%d", &N);

    int result = flip(number, N);
    printf("The number after flipping the last %d digits is: %d\n", N, result);

    return 0;
}

