// TO PRINT MAXIMUM AND SECOND MAXIMUM FROM N NUMBERS

#include<stdio.h>
int main(){
	int i, n;
	int max_, max;
	int number[n];
	
	printf("Enter number : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter number %d : ", i+1);
		scanf("%d", &number[i]);
	}
	
	max=number[0];
	max_ =number[n];
	
	for(i=1; i<n; i++){
		if(max<number[i])
		max=number[i];
	}
	
	for(i=0; i<(n-1); i++){
		if(max_ < number[i]){
			if(max_ == max){
				continue;
			}
			max_=number[i];
		}
	}
   
   printf("Maximum among the %d numbers is %d\n", n, max);
   printf("Second maximum among the %d numbers is %d", n, max_);
return 0;

}
