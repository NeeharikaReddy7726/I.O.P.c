// FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
#include<stdio.h>
int palindrome(int n){

	int reverse =0;
	int remainder;
	while(n !=0){
	remainder= n%10;
	reverse= reverse*10+remainder;
	n=n/10;
	}   
    return reverse; 
}

int main(){
	int n;
	printf("Enter the number : \n");
	scanf("%d", &n);
	int k=palindrome(n);
	if(k == n){
		printf("The entered number is palindrome");
	}
	else{
		printf("The entered number is not palindrome");
	}
	return 0;
	}
	
