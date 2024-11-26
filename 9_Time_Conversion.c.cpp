 //HOURS, MINS, SECONDS INTO TOTAL SECONDS
 #include<stdio.h>
int main(){
	
int h, m, s;

//Enter number of hours
printf("Enter number of hours : ");
scanf("%d", &h);

//Enter number of minutes
printf("Enter number of minutes : ");
scanf("%d", &m);

// Enter number of seconds
printf("Enter number of seconds : ");
scanf("%d", &s);

int total_seconds = 3600*h+60*m+s;

// Print total number of seconds
printf("Total number of seconds = %d", total_seconds);
 
return 0;
}
