// calculation of total marks and perdcentage of five subjects
#include<stdio.h>
int main(){
	float m, p, c, s, e;
	printf("enter maths(0-100) : ");
	scanf("%f", &m);
	
	printf("enter physics(0-100) : ");
	scanf("%f", &p);
	
	printf("enter chemistry(0-100) : ");
	scanf("%f", &c);
	
	printf("enter sanskrit(0-100) : ");
	scanf("%f", &s);
	 
	printf("enter english(0-100) : ");
	scanf("%f", &e);
	
	printf("Total marks of the student is %f\n", (m+p+c+e+s));
	printf("percentage of the student marks is %f", ((m+p+c+e+s)/5));
	
	return 0;
}
