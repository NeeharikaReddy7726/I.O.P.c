// TO READ AN ARRAY OF 10 NUMBERS AND PRINT NO OF ODD AND EVEN NUMBERS

#include<stdio.h>
int main(){
	
int number[10];
int even=0, odd=0, i;

for(i=0; i<=9; i++){
	printf(" Enter number %d\n", i+1);
	scanf("%d", &number[i]);
}

for(i=0; i<10; i++){
	
	if(number[i] % 2 ==0){
	
		 even++;
	}
	else{
	   odd++ ;
	}
}
	printf("Total number of even numbers read is %d\n ", even);
	printf("Total number of odd numbers read is %d", odd);

return 0;	
	
	
	
	
	
	
}
