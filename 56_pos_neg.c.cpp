// TO READ AN ARRAY OF 10 NUMBERS AND PRINT NO OF POSITIVE AND NEGATIVE NUMBERS

#include<stdio.h>
int main(){
	
int number[10];
int positive=0, negative=0, i;

for(i=0; i<=9; i++){
	printf(" Enter number %d\n", i+1);
	scanf("%d", &number[i]);
}

for(i=0; i<10; i++){
	
	if(number[i] >0){
	
		 positive++;
	}
	else if(number[i]<0){
	   negative++ ;
	}
	else{
		0;
	}
}
	printf("Total number of positive numbers read is %d\n ", positive);
	printf("Total number of negative numbers read is %d", negative);

return 0;	
	
	
	
	
	
	
}
