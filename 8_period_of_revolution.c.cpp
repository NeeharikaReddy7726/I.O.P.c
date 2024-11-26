#include<stdio.h>
int main(){
//period of revolution is seconds is pos
 float pos;
 int pod, poh, pom;
pos=31558150;

//period of revolution in mins is pod
pom=pos/60;

//period of revolution in hours is poh
poh =pos/3600;

//period of revolution in days is pod
pod =poh/24;

printf("period of revolution in number of days is %d\n", pod);
printf("period of revolution in number of minutes is %d\n", pom);
printf("period of revolution in number of hours is %d\n", poh);
return 0;
}
