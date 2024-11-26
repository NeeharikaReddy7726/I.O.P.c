// FUNCTION TO CHECK TO WHETHER A NUMBER IS EVEN OR ODD
#include<stdio.h>
int evenodd(int n){
	if(n%2 == 0){
		printf("The number is even ");
	}
	else{
		printf("The number is odd ");
	}
	return 0;
}

int main(){
	int n;
	printf("Enter the number : \n");
	scanf("%d", &n);
	evenodd(n);
	
	return 0;
}
