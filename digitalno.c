#include<stdio.h> 
int main (){
    int h;
    printf("enter the value of clock you want to print-");
    scanf("%d",&h);
   switch (h)
   {
case 1:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(j==4)
            printf("*");
            else  
            printf("    ");
        }
        printf("\n");
    } 
        break;
case 2:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==1||i==4||j==4&&i<5||j==1&&i>=4||i==7)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
case 3:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==1||i==4||j==4||i==7)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
case 4:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==4||j==4||j==1&&i<=4)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
case 5:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==1||i==4||j==4&&i>=4||j==1&&i<=4||i==7)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
case 6:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==1||i==4||i==7||j==1||j==4&&i>=4)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
case 7:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==1||j==4)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
case 8:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==1||i==4||i==7||j==1||j==4)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
case 9:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==1||i==4||i==7||j==1&&i<=4||j==4)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
   
case 0:
    for(int i=1;i<=7;i++){
        for(int j=1;j<=4;j++)
        {
            if(i==1||i==7||j==1||j==4)
            printf("*");
            else  
            printf(" ");
        }
        printf("\n");
    } 
        break;
    
    default: printf("enter the value from 0 to 9 only");
    break;
   }
return 0;
}