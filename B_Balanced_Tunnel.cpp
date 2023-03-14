#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
int main()
{
    fastio();
    ll n;
    cin >> n;
    map<ll, ll> mp;
    deque<ll> q;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x] = i;
        q.push_back(x);
    }
    ll cnt = 0;
    set<ll> s, dl;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        while(1)
        {
            ll tmp=q.front();
            if(dl.find(tmp)!=dl.end())
            {
                q.pop_front();
            }
            else
            break;
        }
        if(q.front()==x)
        {
            q.pop_front();
        }
        else
        {
            auto a=s.find(x);
            auto b=dl.find(x);
            if(b!=dl.end())
            {
                q.pop_front();
            }
            else if(a==s.end())
            {
                s.insert(x);
                dl.insert(x);
            }
        }
    }
    cout << s.size();
}