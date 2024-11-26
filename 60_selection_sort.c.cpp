/ SORTING OF AN ARRAY VIA SELECTION SORTING
#include<stdio.h>
int main(){
	int n, i, j, a, b;
	printf("Enter size of the array: \n");
	scanf("%d", &n);
	
	int array[n],new;
	
	printf("Enter the elements of the array: \n");
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(array[j]<array[i]){
				 new = array[j];
				array[j] = array[i];
				array[i] = new;

	}
	
	return 0;
}
