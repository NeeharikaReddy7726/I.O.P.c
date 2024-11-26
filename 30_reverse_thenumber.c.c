// TO REVERSE A NUMBER
#include<stdio.h>
int main(){
	
	int number;
	int reversed, remainder;
	reversed=0;
	
	// Input 
	printf("Enter the number : ");
	scanf("%d", &number);
	
	int originalnumber = number;
	number = (number<0)? -number :number;
	
	// reverse the number
	while (number !=0) {
		remainder = number %10;        // get last digit
		reversed = reversed*10 + remainder;     
		number /= 10;     // remove the last digit
	}
	
	// Print the result, considering the sign of the driginal number
	if (originalnumber<0){
		reversed = -reversed;
	}
	
	// print thr reversed number
    printf("Reversed nummber : %d", reversed);
		
	return 0;
	
}
