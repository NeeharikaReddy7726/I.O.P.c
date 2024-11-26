// PROGRAM TO READ A 3*3 MATRIX, FIND MAX AND MIN ELEMENT
#include<stdio.h>
int main(){
int i, j;

int array[3][3];

printf("enter the elements of the matrix : \n");
for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		scanf("%d", &array[i][j]);
	}
	printf("\n");
}

int min=array[1][1];

for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(array[i][j] < min){
			min = array[i][j];
		}
	}
}

int max= array[0][0];

for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(array[i][j] > max){
			max = array[i][j] ;
		}
	}
}

printf("Max is %d\n Min is %d", max, min); 
return 0; 
}
