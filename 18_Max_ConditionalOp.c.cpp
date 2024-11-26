// TO PRINT MAX AMONG THREE NUMBERS USING CONDITIONAL OPERATOR(? :)
#include<stdio.h>
int main(){
	
int a, b , c;

//Input

printf("Enter number 1 : ");
scanf("%d", &a);

printf("Enter number 2 : ");
scanf("%d", &b);

printf("Enter number 3 : ");
scanf("%d", &c);

int max;

// Using conditional operator to find max among the three numbers
max= (a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);

// print the output
 printf("%d is maximum among the three numbers", max)  ;
 return 0;
}
