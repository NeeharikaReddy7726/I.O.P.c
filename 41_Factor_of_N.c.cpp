
// To find factors of N
#include<stdio.h>
int main(){
	int i, j, n;
	
	//Input
	printf("Enter number n: ");
	scanf("%d", &n);
	
printf("The factors of N are : \n");
	//now run a for loop to find out the factors of n
	for(i=1; i<=n; i++){
		
		j=n/i;

     if(n%i==0){
	printf("%d\n", j);
}
}

	 return 0;
}
