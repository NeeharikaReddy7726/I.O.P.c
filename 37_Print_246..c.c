// To print 2,4,6,8,....N
#include<stdio.h>
int main(){
	
int i, n;

// Input number n
printf("Enter number n: ");
scanf("%d", &n);

// Run a for loop to print 2,4,6,...N
for(i=2;i<=n; i=i+2){
	printf("%d\n", i);
}
return 0;
}
