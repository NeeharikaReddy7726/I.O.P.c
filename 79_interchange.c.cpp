// FUNCTION EXCHANGE TO INTERCHANGE THE VALUES PF TWO VARIABLES X AND Y
#include<stdio.h>
int interchange(int x, int y){
	int c;
	c=y;
	y=x;
	x=c;
	return x, y;
}

int main(){
	int x, y;
	
	printf("Enter the first variable : ");
	scanf("%d", &x);
	
	printf("Enter the sewcond variable : ");
	scanf("%d", &y);
	
	printf("The variables before interchange are %d  %d \n", x,y);
	printf("The variables after interchange are %d, %d", interchange(x,y));
	return 0;
}
