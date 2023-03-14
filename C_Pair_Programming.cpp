#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll t;
    cin >> t;
read:
    while (t--)
    {
        bool f = 0;
        ll k, n, m;
        cin >> k >> n >> m;
        vector<ll> a, b, ans;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            a.pb(x);
        }
        for(int i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            b.pb(x);
        }
        ll p = 0, q = 0;
        for(int i=0;i<a.size()+b.size();i++)
        {
            if(a[p]==0 && p<a.size())
            {
                ans.pb(a[p]);
                k++;
                p++;
            }
            else if(b[q]==0 && q<b.size())
            {
                ans.pb(b[q]);
                q++;
                k++;
            }
            else
            {
                if(a[p]>k && b[q]>k && p<a.size() && q<b.size())
                {
                    f=1;
                    cout<<-1<<"\n";
                    break;
                }
                else if(a[p]<=k && p<a.size() && b[q]<=k && q<b.size())
                {
                    if(a[p]<=b[q])
                    {
                        ans.pb(a[p]);
                        p++;
                    }
                    else
                    {
                        ans.pb(b[q]);
                        q++;
                    }
                }
                else if(a[p]<=k && p<a.size())
                {
                    ans.pb(a[p]);
                    p++;
                }
                else if(b[q]<=k && q<b.size())
                {
                    ans.pb(b[q]);
                    q++;
                }
                else
                {
                    f=1;
                    cout<<-1<<"\n";
                    break;
                }
            }
        }
        if (!f)
        {
            for (auto i : ans)
                cout << i << " ";
            cout << '\n';
        }
    }
}