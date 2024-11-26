// SIMPLE CALCULATOR USING SWITCH CASE
#include<stdio.h>
int main(){
	
int a, b;

//Input


printf("Enter number1 : ");
scanf("%d", &a);

printf("Enter number2 : ");
scanf("%d", &b);

char ope;

printf("Enter character: ");
scanf(" %c", &ope);
// here operator means '+' for addition, '-' for substraction, '*' for multiplication, '/' for quotient when two numbers are divided, '%' for remainder when two numbers are divided
switch(ope){

case '+':
 printf("Addition of the two numbers is %d", a+b);
            break;
case '-': 
printf("Substaction of the two numbers is %d", a-b);
            break;
case '*':
 printf("Multiplication of two numbers is %d", a*b);
	        break;
case '/':
 if(b!=0){
	printf("Quotient when number1 divided by number2  is %d", a/b);
    } else{
    	printf("Division by 0 is not possible ");
	}        break;
case '%':
 if(b!=0){
	printf("Remainder when number1 divided by number2 is %d", a%b);	
	}else{
		printf("Division by 0 is not possible");
	}		break;
default : printf("Enter proper operator");			        
}	
return 0;		            

}
