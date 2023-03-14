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
int main()
{
    fastio();
    int n1,n2;
    cin>>n1;
    int a[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    int ans[n1+n2];
    int i=0,j=0,k=1;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            ans[k]=a[i];
            i++;
        }
        else
        {
            ans[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        ans[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        ans[k]=b[j];
        k++;
        j++;
    }
    for(k=0;k<n1+n2;k++)
    cout<<ans[k]<<" ";
}