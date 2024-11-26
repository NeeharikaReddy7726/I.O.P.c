// 54 PROGRAM TO READ AN ARRAY OF TEN INTEGER AND PRINT SUM OF THEM

#include<stdio.h>
int main(){
	
	int number[10];
	int i, sum=0;
	
	// run a for loop to scan numbers
	for(i=0; i<=9; i++){
		printf("enter number %d : \n", i+1 );
		scanf("%d", &number[i]);
		sum=sum+number[i];
	}
	
	printf("The sum of numbers is %d ", sum);
	return 0;
	
	
	
}
