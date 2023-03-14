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
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll mx=-1, q,cnt,j;
    for(int i=0;i<n;i++)
    {
        cnt=1;
        j=i;
        while(v[j]>=v[j-1] && j>0)
        {
            cnt++;
            j--;
        }
        j=i;
        while(v[j]>=v[j+1] && j<=n)
        {
            cnt++;
            j++;
        }
        mx=max(mx,cnt);
        //cout<<cnt<<" ";
    }
    cout<<mx;
}