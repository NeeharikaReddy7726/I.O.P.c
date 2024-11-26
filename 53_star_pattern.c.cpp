#include<stdio.h>
int main(){
	int n,remainder;
	printf("Enter number : ");
	scanf("%d", &n);
	int new = 0;
	
	while(n != 0){
		remainder = n%10;
		new=remainder+new*10;
		n=n/10;
	}
     printf("Reverse of the number is %d", new);
     return 0;

}
