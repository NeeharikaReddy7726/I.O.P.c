// PROGRAM TO READ 3*3 MATRIX AND PRINT TRANSPOSE OF THE MATRIX 
#include<stdio.h>
#include<stdio.h>
int main(){
	
int array[3][3], i, j, a, b, arraytranspose[3][3];

printf("enter the elements of the matrix : \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &array[i][j]);
	}
	printf("\n");
}

for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	       arraytranspose[i][j]= array[j][i];

	}
}
	printf("The transposer matrix is :\n");
	for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		printf("%d ", arraytranspose[i][j]);
	}
    printf("\n");
}
 return 0;
}
