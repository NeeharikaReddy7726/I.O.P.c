// AMOUNT PAID BY A CONSUMER FOR ELECTRICITY BILL , CONSIDERING THE INFORMATION GIVEN IN THE QUESTION

#include<stdio.h>
int main(){
	
	int e;   // e = consumption of electricity in unit

//Input consumption of electricity
printf("Enter consumption of electricity:  ") ;
scanf("%d", &e);

// Now using if else to check conditions 
if (0<=e && e<=200){
	printf(" Amount paid by the consumer is %f ", (0.5*e));
}
else if (201<=e && e<=400){
	printf("The amount paid by the consumer is %f", (100+(e-200)*0.65));
}
else if (401<=e && e<=600){
	printf("The amount paid by the consumer is %f", (230+(e-400)*0.8) );
}
else{
	printf("The amount paid by the consumer is %f", (425+(e-600)*125));
}
	
	return 0;
	
}
