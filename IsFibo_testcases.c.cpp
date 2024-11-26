//given	an	integer,N.a	program	to	determine	if	N	is	an	element	of	the	Fibonacci	Sequence
 // input 5, 7, 8
#include<stdio.h>

int fib(int n);

int fib(int n){
	int a=0, b=1, next;
	
    if(n == 0 || n ==1) {
    printf("%d is a fibonacci number");
		}    
	
	while(b<= n){
		if(b == n){
			return 1;
		}
		next = a+b;
		a=b;
		b = next;
	}	
     return 0;		
}
 
int main(){
    int t,i;

    printf("Enter number of test cases: ");
    scanf("%d", &t);
    
    for(i=0; i<t; i++){
    	int n;
    	
    	printf("Enter a number :");
    	scanf("%d", &n);
    	
    	if (fib(n)){
    		printf("%d is a fibonacci number\n", n);
		}
		else{
			printf("%d is not a fibonacci number\n", n);
		}
	}
    

    return 0;
}

/*int isfib(){
	
    	int n;
    	
    	printf("Enter a number :");
    	scanf("%d", &n);
    	
    	if (fib(n)){
    		printf("%d is a fibonacci number\n", n);
		}
		else{
			printf("%d is not a fibonacci number\n", n);
		}
	
}
*/
