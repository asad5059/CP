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
set<ll> s;
set<ll>::iterator it;
ll f(ll n)
{
    for(ll i = 2; i * i <= n;i++)
	{
        if (n % i == 0)
			return i;
    }
	return n;
}
int main()
{
    fastio();
    s.clear();
    ll x,ans=0;
    cin >> x;
    f(x);
    ll cnt = 0;
    if (x == 0)
        cout << 0;
    else
    {
        if (x % 2 != 0)
        {
            ll qq=f(x);
            x-= qq;
		    cnt++;
        }
        ans+=cnt+(x/2);
        cout<<ans<<endl;
	}
    
}
