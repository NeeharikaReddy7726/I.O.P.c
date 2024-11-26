// TO CHECK WHETHER A NUMBER IS EVEN OR ODD
#include<stdio.h>
int main(){
int n;

//Enter a number
printf("Enter a number : ");
scanf("%d", &n);

if(n%2==0){
	printf("Number is even");
}else{
	printf("Number is odd");
}

return 0;
}
