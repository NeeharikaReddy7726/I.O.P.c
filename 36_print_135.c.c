// 36 To print 1,3,5,7,9,...N using for loop
#include<stdio.h>
int main(){
	
int n,i;

//Input number n
printf("Enter number n: ");
scanf("%d", &n);

	// now run while loop to print 1,3,5,..
	i=1;
	while(i<=n){
		printf("%d\n", i);
		i=i+2;
	
	}

return 0;
}



