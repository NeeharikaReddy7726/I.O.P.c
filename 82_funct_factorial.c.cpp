// FUNCTION TO CALCULATE FACTORIAL(N!/R!(N-R)!)  OF A GIVEN NUMBER
#include<stdio.h>

float factorial(float n);

int main() {
    float n, r;
    float nCr;

    printf("Enter value of n: ");
    scanf("%f", &n);
    printf("Enter value of r: ");
    scanf("%f", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input\n");
    } else {
        nCr = factorial(n) / (factorial(r) * factorial(n - r));
        printf("nCr of %fC%f is: %f\n", n, r, nCr);
    }

    return 0;
}

float factorial(float n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

