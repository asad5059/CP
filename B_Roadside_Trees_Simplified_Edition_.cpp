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
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sec=a[0]+1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            sec+=abs(a[i]-a[i-1])+2;
        }
        else if(a[i]<a[i-1])
        {
            sec+=abs(a[i]-a[i-1])+2;
        }
        else
        {
            sec+=2;
        }
    }
    cout<<sec<<endl;
}