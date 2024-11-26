// TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT
#incluse<stdio.h>
int main(){
      
int n;
int reverse= 0, orginalno, remainder;

// Input
printf("Enter number n : ");
scanf("%d", &n);

originalno= n;

// Reverse the number
while(n!=0){
	remainder = number%10; // last digit of the number
	reverse=reverse*10+remainder; //build reversed number
	n=n/10;  // remove last digit from the number
}

// check if originalnumber is equal to reversed number
if(originalno== reverse){
	printf("%d is a palindrome", originalno);
}
else{
	printf("%d is not a palindrome", originalno);
}

return 0;

}
