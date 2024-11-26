//  READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDITION OF THOSE INTO THIRD ARRAY
#include<stdio.h>
int main(){
	
int numb1[10], numb2[10] ;
int sum[10] ;

for(int i=0 ; i<10; i++){
	
printf("Enter number %d in first array : ", i+1);
scanf("%d", &numb1[i]);	
}	

for(int i=0; i<10; i++){
	printf("Enter number %d in second array : ", i+1);
	scanf("%d", &numb2[i]);
}
	
for(int i=0; i<10; i++){
	sum[i]= numb1[i] + numb2[i] ;
}	

for(int i=0; i<10; i++){
	printf("The sum array with %d index is %d\n", i, sum[i]);
}
	 return 0; 
}
