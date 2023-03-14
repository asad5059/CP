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
    while (t--)
    {
        string s, s1, ans, ans2;
        cin >> s >> s1;
        if (s == s1)
        {
            cout << "YES\n";
            continue;
        }
        ll ar[26];
        memset(ar,0,sizeof(ar));
        ll c=0,p=0;
        bool f=1;
        for(int i=0;i<s1.size();i++)
        {
            ar[s1[i]-'a']++;
        }
        ll ps=0;
        for(int i=0;i<25;i++)
        {
            if(ar[i]>0 && ps==0) ps=i;
            if(ar[i+1]<ar[i] && ar[i+1]>0 && ar[i]>0)
            {
                if(ar[i+1]!=ar[ps])
                {f=0;
                break;}
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}