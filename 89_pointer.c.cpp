/* A PROGRAM  TO COPY  ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF 
SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY. */
#include<stdio.h>
int main(){
	int i,n;
	int array[100], array1[100];
	int *arrayptr, *array1ptr;
	
	printf("Enter the number of the elements of the array :\n");
	scanf("%d", &n);
	
	printf("Enter the elements of the array :\n");
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	array1ptr = array1;
	arrayptr = array;
	
	for(i=0; i<n; i++){
		*(array1ptr + i) = *(arrayptr + n-i-1);
	}
	
	printf("Elements of the new array are\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array1[i]); 
    }
   
return 0;
}
