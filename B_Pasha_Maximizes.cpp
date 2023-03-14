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
    string s, s2;
    ll k,idx=-1,cnt = 0;
    cin >> s >> k;
    s2 = s;
    sort(s2.rbegin(), s2.rend());
    // cout<<s2<<"\n";
    for(int i=0;i<s.size();i++)
    {
        if(s==s2 || k<=0) break;
        idx=-1;
        char mx=s[i];
        for(int j=i+1,x=0;x<k && j<s.size();j++,x++)
        {
            if(s[j]>mx)
            {
                mx=s[j]; idx=j;
            }
        }
        for(int j=idx-1;j>=i;j--)
        {
            swap(s[j],s[j+1]);
            k--;
        }
    }
    cout<<s;
}