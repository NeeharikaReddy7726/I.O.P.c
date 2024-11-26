// PRINTING DIVISION OF FIVE SUBJECT MARKS
#include<stdio.h>
int main(){
float s1, s2, s3, s4, s5;
float division;
printf("Enter subject 1: ");
scanf("%f", &s1);

printf("Enter subject 2: ");
scanf("%f", &s2);

printf("Enter subject 3: ");
scanf("%f", &s3);

printf("Enter subject 4: ");
scanf("%f", &s4);

printf("Enter subject 5: ");
scanf("%f", &s5);

division=(s1+s2+s3+s4+s5)/5;

printf("Division of five subjects is : %f", division);

return 0;
}
