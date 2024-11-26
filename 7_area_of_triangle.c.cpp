// TO CALCULATE THE AREA OF TRIANGLE
#include <stdio.h>

int main() {
    float h, b, area;
    
    // Input height 
	printf("enter height : ");
    scanf("%f", &h);
     
    // Input base
    printf("enter base : ");
    scanf("%f", &b);
     
    area=(b*h*0.5); // formula of are of triangle 56
    
    //calculation of area of triangle
    printf("area of triangle is : %f", area);
    
    return 0;
}

