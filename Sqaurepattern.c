#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter the number of lines in the square");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i==1&&j==1||i==1&&j==n||i==n&&j==1||i==n&&j==n)
printf("+ ");
else if(i==1&&j!=1&&j!=n||i==n&&j!=1&&j!=n)
printf("- ");
else if(j==1&&i!=1&&i!=n||j==n&&i!=1&&i!=n)
printf("| ");
else
printf("  ");
}
printf("\n");
}
return 0;
}