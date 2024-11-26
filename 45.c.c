#include<stdio.h>
int main(){
	
	int a=18;
	
	int i=0;
	
	do{
	
		printf("guess any number: \n" );
		scanf("%d" , &i);
		if (i==a){
			printf("correct number guessed, congrats :)");
			break;
		}
	}
		while(1);
			
		
	
	
	
	
	
	
	return 0;
}
