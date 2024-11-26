// TO PRINT SINGLE DIGIT ANSWER SHOWING SUM OF DIGITS OF N
#include<stdio.h>
int main(){
	
int sum=0, _sum=0, digit, _digit ;
int n;

printf("Enter number : ");
scanf("%d", &n);


while(n != 0){
	digit = n%10 ;
	sum=sum+digit;
	n= n/10 ;

}	

_sum=sum ;


while(_sum >= 10){
	sum=0;
   while(_sum != 0) {
   digit = _sum%10 ;
    sum = sum + digit ;
    _sum = _sum/10;
}	
    _sum = sum;
}

printf("single digit sum : %d", _sum);

return 0;
	
}
