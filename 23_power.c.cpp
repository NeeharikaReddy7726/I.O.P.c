// CALCULATION OF POWER WITHOUT USING HEADER FILE

#include <stdio.h>

int main() {
	int base, exponent;
	int i;
	int result=1;
    
    // Enter base
    printf("enter base: ");
    scanf("%d", &base);
    
    // enter exponent
    printf("enter exponent: ");
    scanf("%d", &exponent);
    
    // Run for loop to calculate the power
    for(i=1; i<=exponent; i++){
    	
		result=result*base;
	}
	
	printf("%d raised to power of %d is %d", base, exponent, result);
	return 0;
} 
