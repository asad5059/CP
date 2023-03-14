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
        string s;
        cin >> s;
        string s1=s,s2=s;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0 && s[i]=='?')
            {
                s1[i]='1';
                s2[i]='0';   
            }
            else if(s[i]=='?')
            {
                s1[i]='0';
                s2[i]='1';
            }
        }
        ll g1=0,g2=0,c1=0,c2=0,k1=0,k2=0,i=0;
        for(i=0;i<s1.size();i++)
        {
            if(i%2==0)
            {
                if(s1[i]=='1')
                {
                    g1++;
                    k1++;
                }
                if(s1[i]=='0') k1++;
                if(g1>(5-k2+g2))
                {
                    break;
                }
                if(g2>(5-k1+g1))
                {
                    break;
                }

            }
            else
            {
                if(s1[i]=='1')
                {
                    g2++;
                    k2++;
                }
                if(s1[i]=='0') k2++;
                if(g1>(5-k2+g2))
                {
                    break;
                }
                if(g2>(5-k1+g1))
                {
                    break;
                }
            }
        }
        c1=k1+k2;
        i=0;
        g1=0,g2=0,c2=0,k1=0,k2=0,i=0;
        for(i=0;i<s2.size();i++)
        {
            if(i%2==0)
            {
                if(s2[i]=='1')
                {
                    g1++;
                    k1++;
                }
                if(s2[i]=='0') k1++;
                if(g1>(5-k2+g2))
                {
                    break;
                }
                if(g2>(5-k1+g1))
                {
                    break;
                }

            }
            else
            {
                if(s2[i]=='1')
                {
                    g2++;
                    k2++;
                }
                if(s2[i]=='0') k2++;
                if(g1>(5-k2+g2))
                {
                    break;
                }
                if(g2>(5-k1+g1))
                {
                    break;
                }
            }
        }
        c2=k1+k2;
        cout<<min(c1,c2)<<" \n";
    }
}