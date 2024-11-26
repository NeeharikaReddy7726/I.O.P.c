// CONVERSION OF FAHRENHEIT TO CELSIUS

#include<stdio.h>
int main(){
	float ft;
	
	//Input fahrenheit temperature
	printf("enter fahrenheit temperature : ");
	scanf("%f", &ft);
	
	float celsius= (5.0/9.0)*(ft-32);
	
	printf("temp in celsius is : %f", celsius);
	
	return 0;
}
