// filling jars
#include<stdio.h>
 int main(){
    int n,m;
    printf("enter the number of jars\n");
    scanf("%d",&n);
    if(n<3){
        printf("number of jars can't be less than 3\n");
        return 0;
    }
    printf("enter the number of operations\n");
    scanf("%d",&m);
    if(m<1){
        printf("number of operations can't be less than 1\n");
        return 0;
    }
    int jar[n];
    
    for(int i=0;i<n;i++){
        jar[i]=0;
    }
    int sum=0;

    for(int i=0;i<m;i++){
    printf("enter the three operations\n");
    int a,b,k;
    scanf("%d %d %d", &a, &b, &k);
    if(1<=a&&a<=b&&b<=n&&k>=0)
    {
    for(int i=0;i<n;i++ ){
        if((i>=(a-1)&&i<b)||(i<a&&i>=(b-1))){
            jar[i]+=k;
            sum+=k;
        }
    }
    }
    else{
        printf("invalid input\n");
        return 0;
    }
    }
    printf(" the average after all operations is %d",sum/n);
    return 0;
 }
