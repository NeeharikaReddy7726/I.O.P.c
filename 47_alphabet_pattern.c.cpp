/* PATTERN TO PRINT A
                    AB
					ABC
					ABCD
					ABCDE
*/
					
#include<stdio.h>
int main(){
	
char c='A';
int i, j;
int row;

// for loop for row
for(i=65;i<=69; i++){
	
	// for loop for column
	for(j=65; j<=i; j++){
		printf("%c", j);
	}
	printf("\n");
}	
return 0;
}					 
