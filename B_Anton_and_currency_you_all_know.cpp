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
    string s;
    cin >> s;
    ll n=s.size(),j=-1;
    ll lst=s[n-1]-'0';
    for(int i=0;i<n;i++)
    {
        ll x=s[i]-'0';
        if(x%2==0)
        {
            if(lst>x)
            {
                swap(s[i],s[n-1]);
                cout<<s;
                return 0;
            }
            j=i;
        }
    }
    if(j==-1) {
        cout<<-1;
        return 0;
    }
    swap(s[j],s[n-1]);
    cout<<s;
}