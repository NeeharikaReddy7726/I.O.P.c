// TO PRINT SUM OF DIGITS OF A NUMBER
#include<stdio.h>
int main(){
	
	int n, sum=0, digit;
	
	//Input
	printf("Enter number : ");
	scanf("%d", &n);
	
	n = (n<0) ? -n : n ;
	
	// sum of digits
	while(n!=0) {
		digit = n%10;  // get the last digit
		sum+= digit;     // add  digit to sum
		n /= 10;     // remove the last digit
	}
	
	// print sum of digits
	printf(" Sum of the digits of the number is %d", sum);
	
return 0;	

}
