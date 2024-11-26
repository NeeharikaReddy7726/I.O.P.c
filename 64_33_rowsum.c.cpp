// PROGRAM TO READ 3*3 MATRIX AND PRINT SUM OF ALL ROWS
#include<stdio.h>
int main(){
	
int array[3][3], i, j;

printf("enter the elements of the matrix : \n");

for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &array[i][j]);
	}
	printf("\n");
}
int row1= array[0][0]+array[0][1]+array[0][2];
int row2 = array[1][0]+array[1][1]+ array[1][2];
int row3 = array[2][0]+ array[2][1]+ array[2][2];

printf("The sum of elements in row 1 is %d, in row 2 is %d, in row 3 is %d" ,row1, row2, row3);

return 0;
}
