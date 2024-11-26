// TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP THEM
#include<stdio.h>
int main(){
	
int array1[10] ; 
int array2[10] ;
int array3[10] ;

for(int i=0; i<10; i++){
	printf("Enter number%d in array 1 : ", i+1);
	scanf("%d", &array1[i]);
}

for(int i=0; i<10; i++){
	printf("Enter number%d in array 2 : ", i+1);
	scanf("%d", &array2[i]);
}

for(int i=0; i<10; i++){
	array3[i] = array2[i];
	array2[i] = array1[i];
	array1[i] = array3[i];
}
// after swapping 
printf("Array1 after  after swapping\n"); 

for(int i=0; i<10; i++){
	printf("Number%d  is %d\n", i+1, array1[i]);
}

printf("Array2 after swapping \n");

for(int i=0; i<10; i++){
	printf("Number%d  is %d\n", i+1, array2[i]);
}


return 0; 

} 
