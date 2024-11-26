// TO FIND THE VALUE OF 'Y' WITH Y(x,n) FUNCTION GIVEN IN THE QUESTION
#include<stdio.h>
#include<math.h>       // for power = pow(x,n)
int main(){
	
	float x,n;
	
	// Input
	printf("Enter x( integers only) : ");
	scanf("%f", &x);
	
	printf("Enter n : ");
	scanf("%f", &n);
	
	// run if ese to check n and perform respective result
	
	if(n==1){
		printf("The value of Y = %f ", (1+x));
	}
	else if(n==2){	
	    printf("The value of Y = %f ", (1+(x/n)) );
	}
	else if(n==3){
		printf("The value of Y = %f", pow(x,n));
	}
	else{
		printf("The value of Y = %f", (1+n*x));
	}
	
	
	return 0;
	
}
