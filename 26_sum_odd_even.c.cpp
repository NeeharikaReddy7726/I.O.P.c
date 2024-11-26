// SUM OF ALL ODD AND EVEN NUMBERS BETWEEN 1 AND N
#include <stdio.h>

int main() {
	int a,n;
	int sum=0, s=0, su=0, i;
	    
    //enter number
    printf("enter number n: ");
    scanf("%d", &n);
    
    
// sum of odd numbers between 1 and N	
    for(i=1;i<=n; i=i+2){
	su=su+i;
	}
    	printf("sum of odd numbers is %d\n", su);


//sum of even numbers between 1 and N

    	for(i=0;i<=n; i=i+2){
    		sum=sum+i;
		}
		printf(" sum of even numbers is %d\n", sum);
	
	// sum of all numbers between 1 and N
	for(i=1;i<=n; i++){
		s=s+i;
	}
    printf(" sum all odd and even numbers is %d", s);
    
	return 0;
} 
