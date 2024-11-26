// PROGRA TO READ TWO 3*3 MARIX AND STORE THEIR PRODUCT IN THIRD MATRIX
#include<stdio.h>
int main(){
int i, j;

int array1[3][3], array2[3][3], array3[3][3], array2transpose[i][j];

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
 
 for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	       array2transpose[i][j]= array2[j][i];

	}
}
 
printf("The elements of the matrix 3 are : \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		array3[i][j] = array1[i][j] * array2transpose[i][j] ;
		printf("%d ", array3[i][j]);
	}
	printf("\n");
}
 
return 0;
}
