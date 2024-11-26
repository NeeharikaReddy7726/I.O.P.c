// FUNCTION TO CHECK WHETBER A NUMBER IS ARMSRONG OR NOT
#include<stdio.h>
#include<math.h>
int armstrong(int n){
    int a=0, sum=0, remainder;
	int original=n;
	while(original != 0){
		n=n/10;
		a++ ;
	}
	original=n;
	while(original != 0){
		remainder = n%10;
		sum=sum +pow(remainder,a);
	}
	return sum;	
}

int main(){
	int n;
	printf("Enter the number = ");
	scanf("%d", &n);
	int sum = armstrong(n);
	if(n == sum){
		printf("The entered number is an armstrong");
	}
	if(n != sum){
		printf("The entered number is not an armstrong");
	}
	return 0;
}

