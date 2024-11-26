// CONVERSION OF TOTAL SECONDS INTO TIME 
#include<stdio.h>
int main(){
int s, m, h, u;

// enter total seconds
printf("Enter total seconds : ");
scanf("%d", &s);

h=(s/3600);
m=((s-3600*h)/60);
u=(s-3600*h-60*m);

// print time
printf("Time is %d hour(s), %d minute(s), %d second(s)", h,m,u);

return 0;
}
