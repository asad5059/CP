#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1,n2=r-m,cnt=0;
    int x[n1],y[n2];
    for(int i=0;i<n1;i++)
    {
        x[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        y[i]=a[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(x[i]<=y[j])
        {
            a[k++]=x[i++];
        }
        else
        a[k++]=y[j++];
    }
    while(i<n1)
    {
        a[k++]=x[i++];
    }
    while(j<n2)
    {
        a[k++]=y[j++];
    }
}
void mergesort(int a[],int l,int r)
{
    if(l>=r)
    return;
    int m=l+(r-l)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
}
int main()
{
    fastio();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}