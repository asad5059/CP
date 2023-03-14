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
vector<ll> v;
void fun()
{
    ll x=10000*3;
    ll q=0;
    v.pb(1);
    v.pb(2);
    for(int i=3;i<=x;i+=2)
    {
        for(int j=3;j*j<=i;j+=2)
        {
            if(i%j==0)
            {
                q=1;
                break;
            }
        }
        if(q==0) v.pb(i);
        q=0; 
    }
    sort(v.begin(),v.end());
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    fun();
    while (t--)
    {
        ll d;
        cin >> d;
        ll m,n;
        int i=0;
        while(v[i]-1<d)
        {
            i++;
            m=v[i];
        }
        int j=i;
        while(v[j]-v[i]<d)
        {
            j++;
            n=v[j];
        }
        cout<<m*n<<"\n";
    }
}
