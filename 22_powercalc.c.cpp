
#include <stdio.h>

int main() {
	int base, exponent;
	int i;
	int result=1;
    
    printf("enter base: ");
    scanf("%d", &base);
    
    printf("enter exponent: ");
    scanf("%d", &exponent);
    
    for(i=1; i<=exponent; i++){
    	
		result=result*base;
	}
	
	printf("%d raised to power of %d is %d", base, exponent, result);
	return 0;
} 
