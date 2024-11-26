// To Print 1/1!+2/2!+3/3!+4/4!+...N
#include<stdio.h>
int main(){
	 
int i,n;
int j=1;
float sum=0;

//Input
printf("Enter the number: ");
scanf("%d", &n);

//Now run a for loop 

 for(i=1;i<=n; i++){
 	int factorial = 1;
 	
 	for(int j=1; j<=i; j++){
 		factorial *= j;
	 }
 	sum+= (float)i/ factorial;
 }
 printf("the required sum of the given series is: %f", sum);	
	
	return 0;
}
