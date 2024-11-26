// PROGRAM TO READ DATA OF TEN STUDENTS AND PRINT THE FOLLOWING
#include<stdio.h>
int main(){
	int i,j, a,b;
	int total[10], subject1[10], subject2[10], subject3[10] ;
	
	printf("Enter marks of subject1 of 10 students\n");
	for(i=0; i<10; i++){
		scanf("%d", subject1[i]);
	}
	
	printf("Enter marks of subject 2 of 10 students\n");
	for(i=0; i<10; i++){
		scanf("%d", subject2[i]);
	}
	
	printf("Enter marks of subject 3 of 10 students \n");
	for(i=0; i<10; i++){
		scanf("%d", subject3[i]);
	}
	for(i=0; i<10; i++){
	 total[i]=subject1[i] + subject2[i] + subject3[i] ;
	 printf("Total is %d", total[i]);
}
    int max 
	
	return 0; 
	
}
