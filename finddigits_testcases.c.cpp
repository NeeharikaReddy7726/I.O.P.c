//given	a	number	N,need to print	the	number	of	positions where	digits exactly	divides	N
// input 1, 12
#include<stdio.h>

int digits(int n);

int digits(int n){
int original_number = n;
    int position = 1;    
    int count = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && original_number % digit == 0) {
            count++;
        }
        n /= 10;          
        position++;       
    }

    return count; //
}
 
int main(){
    int t,i;

    printf("Enter number of test cases: ");
    scanf("%d", &t);
    
    for(i=0; i<t; i++){
    	int n;
    	
    	printf("Enter a number :");
    	scanf("%d", &n);
    	
    	int result = digits(n);
        printf("Number of positions where digits of %d divide it: %d\n", n, result);
	}
    

    return 0;
}

