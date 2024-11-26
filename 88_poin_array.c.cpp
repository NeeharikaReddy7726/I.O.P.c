// A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS. 
#include<stdio.h>

int main(){
   int array[100],array1[100] ,n,i;
   int *arrayPtr, *array1Ptr;
   
   printf("Enter the number elements of the array :");
   scanf("%d", &n);
   
   printf("Enter the elements of the array:\n");
   for(int i=0; i<n; i++){
   	scanf("%d", &array[i]);
   }	
   
   arrayPtr = array;
   array1Ptr =array1;

    for (i = 0; i < n; i++) {
        *(array1Ptr + i) = *(arrayPtr + i);
    }

    printf("Elements of the final array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array1[i]); 
    }
   
return 0;
}
