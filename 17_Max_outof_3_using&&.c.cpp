// MAX AMONG THREE NUMBERS USING LOGICAL OPERATOR-&&
#include<stdio.h>
int main(){
float a,b,c ;
printf("Enter a : ");
scanf("%f", &a);

printf("Enter b :");
scanf("%f", &b);

printf("Enter c :");
scanf("%f", &c);

// if-else concept to check the max among a, b, c
if(a>b&& a>c){  
	printf("Number a is maximum among the three numbers");
	}
else if(b>c&&b>a){
		printf("Number b is maximum among the three numbers");
	}

else{
		printf("Number c is maximum among the three numbers");
	}

return 0;
}
