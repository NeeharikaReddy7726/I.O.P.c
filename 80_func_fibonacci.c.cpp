// FUNCTION TO GENERATE TO FIRST N FIBONACCI SERIES
 
#include<stdio.h>

int fib(int n); // Function prototype

int main(){
    int i, n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms is:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}

int fib(int n){
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

