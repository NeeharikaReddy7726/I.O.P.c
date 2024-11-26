// PROGRAM TO ROTATE AN ARRAY BY N POSITIONS
#include<stdio.h>
int main(){
	int n, i, x;
	printf("Enter size of the array\n");
	scanf("%d", &n);
	int array[n], newarray[n];
	
	printf("Enter the elements of the array\n");
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
	}
	
	printf("Enter the number of positions by which the array has to rotate\n");
	scanf("%d", &x);

for(i=0; i<n-x; i++){

    newarray[i]=array[i+x];
}
for(i=(n-x); i<n; i++){
	newarray[i]= array[i-(n-x)];
}

printf("The new array is : ");
for(i=0; i<n; i++){
	printf("%d ", newarray[i]);
}
return 0;
}
