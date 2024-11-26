/*TO PRINT PATTERN *
                  * *
                 * * *
                * * * *
               * * * * *
*/

#include<stdio.h>
int main(){
	
int i, j;
	
	for(i=1; i<=5; i++ ){
		 for(j=5; j>i; j--){
		 	printf(" ");
		 }
		 for(int j=1; j<=i; j++){ 
		 	 printf("* ");
		 }
		 printf("\n");    // to move to next row
	}
	
	
	return 0;
	
	
}                   
