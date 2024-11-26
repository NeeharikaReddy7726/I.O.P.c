// PROGRA TO READ TWO 3*3 MARIX AND STORE THEIR DIFFERENCE IN THIRD MATRIX
#include<stdio.h>
int main(){
int i, j;

int array1[3][3], array2[3][3], array3[3][3];

printf("Enter the elements of the matrix 1 : \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &array1[i][j]);
	}
	printf("\n");
}

printf("Enter the elements of the matrix 2 : \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &array2[i][j]);
	}
	printf("\n");
}
 
printf("The elements of the matrix 3(difference) are : \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		array3[i][j] = array1[i][j] - array2[i][j] ;
		printf("%d ", array3[i][j]);
	}
	printf("\n");
}
 
return 0;
}
