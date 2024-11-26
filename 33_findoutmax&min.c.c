// TO FIND MAXIMUM AND MINIMUM FROM N NUMBERS

#include<stdio.h>
int main(){
	int i,n;
	int max, min;
	printf("enter number : ");
	scanf("%d", &n);
	
int number[n];
 for(i=0; i<n; i++){
 	printf("enter number %d : ", i+1);
 	scanf("%d", &number[i]);
 }
  
  max=number[0];
  
  for(i=1; i<n; i++){
  	if(max<number[i])
  	 max=number[i];
  }	
  
  min=number[n-1];
  
  for(i=0; i<(n-1); i++){
  	if(min>number[i])
  	 min=number[i];
  }
  
  printf("Maximum among the %d numbers is %d\n", n, max);
  printf("Minimum among the %d numbers is %d", n, min);
  
  return 0;
}
