// CHECK WHETHER A NUMBER IS LOWER CASE LETTER OR NOT

#include <stdio.h>
#include <ctype.h>

int main() {
	char c;

	//enter the character 
	
	printf("enter the character : ");
	scanf("%c", &c);
	
	// using ternary operator to check whEther the input character is lower case letter or not
	
	c>=97&&c<=122 ? printf("The entered character is a lower case letter"): printf("The entered character is not a lower case letter");
	
    return 0;
}


