#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,n;
    for(int i=1;i<=20;i++)
    {
        scanf("%d",&n);
        sum+=n;
    }
    printf("%lf\n",sum/20.0);
}