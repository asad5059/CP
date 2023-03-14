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
string s;
bool ok(ll m)
{
    ll i=m-1;
    while(1)
    {
        if(i>=s.size()) return 1;
        if(s[i]=='L')
        {
            ll cnt=0;
            while(cnt<m-1 && s[i]!='R')
            {
                cnt++,i--;
            }
            if(s[i]!='R') return 0;
        }
        i+=m;
    }
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        ll l = 0, r = s.size()+1, mid;
        //cout<<s.size();
        while (l + 1 < r)
        {
            mid = l - (l - r) / 2;
            if (ok(mid))
            {
                r = mid;
            }
            else
                l = mid;
        }
        cout << r << "\n";
        s.clear();
    }
}