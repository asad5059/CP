#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
    ll n,m;
    scanf("%lld %lld",&n,&m);
    char a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%c",&a[i][j]);
        }
    }
    ll p,q;
    scanf("%lld %lld",&p,&q);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%c",a[i][j]);
        }
    }
    
    
}