/*WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING 
POINTERS.FOR EXAMPLE, 
ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS” */
#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char *ptr, *newptr;
	
	char string[100], newstring[100];
	printf("Enter the string : \n");
	gets(string);
	
	int l= strlen(string);
	ptr= string;
	newptr= newstring;
	
	for(i=0; i<l; i++){
		*(newptr + i) = *(ptr+l-i-1);
	}
	
	printf("The new string is \n %s", newstring );
	
	return 0;
}
