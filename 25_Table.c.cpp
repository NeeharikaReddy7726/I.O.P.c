// TABLE OF ANY NUMBER
#include <stdio.h>

int main() {
	int a,n;
	int i;
    
    //enter number whose htable has to be calculated
    printf("Enter number n: ");
    scanf("%d", &n);
    
    // enter the number upto which the table has to be calculated
    printf("Enter a: ");
    scanf("%d", &a);
    
    // run a for loop to calculate the table
    for(i=1;i<=a; i++){
    	printf("%d\n", i*n);
	}
    
	return 0;
} 
    
