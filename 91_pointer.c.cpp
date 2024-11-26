// A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING 
//POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
 #include<stdio.h>
 #include<math.h>
 int main(){
 	
 	int i,n;
 	int *p;
 	
 	printf("Enter the number : \n");
 	scanf("%d",&n);
 	
 	p=&n;
 	
    int square= pow( *(p), 2);
    int cube = pow( *(p), 3);
    
    printf("The cube of the number is %d \n", cube);
    printf("The square of the number is %d", square);
    
    return 0;
 }
