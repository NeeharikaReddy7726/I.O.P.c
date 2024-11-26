// TO CALCULATE COMMISION ACC TO THE CONDITIONS GIVEN IN THE QUESTION

#include<stdio.h>
int main(){
	
	float sales;
	
	//input sales from user
	printf("Enter sales:  ");
	scanf("%f", &sales);
	
	// run if else to check conditions and print output accordingly
	
	if(sales <= 500){
		printf("The commission is %f", 0.05*sales);
	}
	else if(sales >500 && sales <= 2000){
		printf("The commission is %f", (35+0.1*sales));
	}
	else if(sales>2000 && sales<= 5000){
		printf("The commission is %f", (185+0.12*sales));
	}
	else{
		printf("The commission is %f", (0.125*sales));
	}
	
	return 0;
}
