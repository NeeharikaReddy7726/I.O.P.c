// To check whether a number is prime or composite
#include<stdio.h>
int main(){
	int i, n;
	int is_prime=1;
	
	//Input
	printf("Enter number n: ");
	scanf("%d", &n);
	
	//the  concept: If a number is prime the factors are 1 and the number itself.
	// so when n is divided by any number >1 and <n the remainder must not be equal to zero
	//the number which is NOT PRIME is COMPOSITE
	
	//now run a for to check all the numbers b/w 1 to n
	for(i=2; i<n; i++){
		// now use ternary operator 
		if(n%i==0){
			is_prime=0;
		}
	}
		if(is_prime){
			printf("The number is PRIME");
		}
		else if(n==1){
			//1 is neither prime nor composite number
			// For a number to be prime it should have two factors
			printf("As the number is 1. It is neither a prime number nor composite number");
		}
		else{
		printf("The number is COMPOSITE ");
		}
		
	
 return 0;
}
