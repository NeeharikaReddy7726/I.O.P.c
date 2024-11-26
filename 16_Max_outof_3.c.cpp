// MAX AMONG THREE NUMBERS WITHOUT USING LOGICAL AND CONDITIONAL OPERATOR
#include <stdio.h>
#include <ctype.h>

int main() {
	int max, num1, num2, num3;
	
	//enter the three numbers
	
	printf("Enter the three numbers : \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	// using ternary operastor to check the max among the three numbers
	
	max = (num1 > num2)?((num1 > num3)? num1: num3) : ((num2 > num3)? num2: num3);
	
	// print the max number
	printf(" The maximum number among the three numbers is : %d", max);
	
    return 0;
}

