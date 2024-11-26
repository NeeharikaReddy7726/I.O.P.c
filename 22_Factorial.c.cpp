// CALCULATION OF FACTORIAL OF A NUMBER
#include <stdio.h>

// declaring the function 'factorial()'
int factorial(int n);

// Main function
int main() {
int n;
printf("enter number : ");
scanf("%d", &n);

printf("Factorial is  %d", factorial(n));
	       return 0;
	       
}

// defining the function 'factorial()'
int factorial(int n){
	if(n==0){
		return 1;
	}
    int	factnm1=factorial(n-1);
	int factn=factnm1*n;
	return factn;
} 


