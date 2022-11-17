#include<stdio.h>

int main(){
    int n,a,b;
    scanf("%d", &n);
    int copy1=n;
    int copy2=n;
    while(n!=0){
        int c=0;
        a=n%10;
            while(copy1!=0){
                b=copy1%10;
                if(a==b) c++;
                copy1=copy1/10;
            }
        n=n/10;
        copy1=copy2;
        printf("%d is repeated %d times\n", a,c);
    }
}