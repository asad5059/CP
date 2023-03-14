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
    ll n,mx_a1=0,mx_a2=0,mx_b1=0,mx_b2=0;
    cin>>n;
    vector <ll> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx_a1)
        {
            mx_a2=mx_a1;
            mx_a1=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]>mx_b1)
        {
            mx_b2=mx_b1;
            mx_b1=b[i];
        }
    }
    if(n==2)
    cout<<"YES";
    else
    {
        
    }
    
}
