// Calculation of simple Interest

#include<stdio.h>
int main(){
	float p, r ,t;
	
	//Enter time
	printf("enter time : ");
	scanf("%f", &t);
	
	//Enter principal
	printf("enter principal : ");
	scanf("%f", &p);
	
	//Enter rate
	printf("enter rate : ");
	scanf("%f", &r);
	
	// formula of simple interest is ptr/100
	printf("Simple Interest is %.2f", ((p*t*r)/100));
	return 0;
}
