#include<stdio.h>
int main()
{
    int n;
    int y,m;
    scanf("%d",&n);
    y=n/365;
    n=n-365*y;
    printf("%d years\n",y);
    m=n/30;
    n=n-30*m;
    printf("%d months\n",m);
    printf("%d days\n",n);
}