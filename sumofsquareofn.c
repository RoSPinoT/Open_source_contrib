#include<stdio.h>
int main () {
    int n,sum;
    printf("enter value of n :");
    scanf("%d",&n);
    sum=n*(n+1)*(2*n+1)/6;
    printf("sum of the square of n numbers is %d",sum);
    return 0;
}