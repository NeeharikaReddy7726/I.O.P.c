//	PROGRAM TO SORT AN ARRAY VIA BUBBLE SORT
#include<stdio.h>
int main(){
	int i, j, a, b, n, counter, new;
	printf("Enter size of the array : \n");
	scanf("%d", &n);
	
	int array[n];
	printf("Enter the elements of the array: \n");
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	for(counter=1; counter<n; counter++){
	
	for(i=0; i<n-counter; i++){
		if(array[i] > array[i+1]){
			int new = array[i];
			array[i] = array[i+1];
			array[i+1] = new; 
		}
	}
}
   printf("The array after sorting : \n ");
   for(i=0; i<n; i++){
   	printf("%d ", array[i]);
   }
   return 0; 
}
