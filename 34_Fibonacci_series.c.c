// PROGRAM TO PRINT FIBONACCI SERIES (i.e; 0,1,1,2,3,5,8,...)

#include<stdio.h>

// Declare a function called "fib"
int fib(int n);

//Main function
int main(){
 int i, n;
 
 // enter input from user
 printf("enter number of terms : ");
 scanf("%d", &n);
 
 //print fibonacci series upto n terms 
 printf("Fibonacci series upto %d terms is \n ", n);
 for (i=0; i<n; i++) {
 	printf("%d ", fib(i));
 }
 	
	return 0;
	
	
}

// Define the function called "fib"
int fib(int n){
	//base condition for this function
	if(n == 0){
		return 0;
	}
	if(n == 1){
	return 1;
	}
   // Recursively calculate fibonacci series 
	return fib(n-1)+fib(n-2);
	
}
