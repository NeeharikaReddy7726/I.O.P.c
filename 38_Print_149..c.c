// 38. TO PRINT 1,4,9,16,....
#include<stdio.h>
int main(){
	
// If we observe the pattern of the series 1,4,9,16,25,...we can say that they are squares of successive natural numbers

//1. firstly we shall enter the number n
int i, n;
int s=1;
printf("Enter number n: ");
scanf("%d", &n);

//run for loop for further result
for (i=1;i<=n;i++){
	
//printing squares of succesive natural numbers
printf("%d\n", i*i);	
	
}
	
	return 0;
	
}
