#include<stdio.h>
int main()
{
    
    int n, m;
    scanf("%d%d",&n,&m);
    int f = 1;
    if (m > n)
        f = 2;
    while (n > 0 || m > 0)
    {
        if (n > m)
        {
            printf("G");
            n--;
        }
        else if (m > n)
        {
            printf("B");
            m--;
        }
        else if (n == m && f == 2)
        {
            printf("G");
            n--;
        }
        else
        {
            printf("B");
            m--;
        }
    }
    printf("\n");
}
