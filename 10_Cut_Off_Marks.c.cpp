// CUT OFF MARKS 
#include<stdio.h>
int main(){
float m, p, c, e, cm;
printf("Enter marks in maths(0-200) : ");
scanf("%f", &m);

// enter physics marks
printf("Enter marks in physics(0-200) : ");
scanf("%f", &p);

// enter chemistry marks 
printf("Enter marks in chemistry(0-200) : ");
scanf("%f", &c);

// enter entrance examination marks 
printf("Enter marks in entrance examination(0-100) : ");
scanf("%f", &e);

// calculation of cutoff marks
cm=m/2+p/2+c/2+e;
//CM is the cut off marks
//and the formula of cutoff marks is calculated acc to info given in the question

printf("cut off marks of the student is %f", cm);

return 0;
}
