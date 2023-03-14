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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
ll a, b;
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ll n = a + b;
        if (a < b)
            swap(a, b);
        set<ll> ans;
        vector<char> v1(n), v2(n), v3(n), v4(n);
        string s = "", s1 = "";
        ll mi1 = 0, mx1 = 0, mi2 = 0, mx2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                s += 'A';
                s1 += 'B';
            }
            else
            {
                s += 'B';
                s1 += 'A';
            }
        }
        mi1 = 0, mi2 = 0, mx1 = 0, mx2 = 0;
        int x = a;
        for (int i = 0; i < n && x > 0; i += 2)
        {
            v1[i] = 'A';
            x--;
        }
        int j = 1;
        while (x > 0 && j < n)
        {
            v1[j] = 'A';
            j += 2;
            x--;
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != 'A')
                v1[i] = 'B';
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] != v1[i])
                mi1++;
        }

        x = a;
        for (int i = 1; i < n && x > 0; i += 2)
        {
            v2[i] = 'A';
            x--;
        }
        j = 0;
        while (x > 0)
        {
            v2[j] = 'A';
            j += 2;
            x--;
        }
        for (int i = 0; i < n; i++)
        {
            if (v2[i] != 'A')
                v2[i] = 'B';
        }
        for (int i = 0; i < n; i++)
        {
            if (v2[i] != s[i])
            {
                mx1++;
            }
        }

        x = a;
        for (int i = 1; i < n && x > 0; i += 2)
        {
            v3[i] = 'A';
            x--;
        }
        j = 0;
        while (x > 0)
        {
            v3[j] = 'A';
            x--;
            j += 2;
        }
        for (int i = 0; i < n; i++)
        {
            if (v3[i] != 'A')
                v3[i] = 'B';
        }
        for (int i = 0; i < n; i++)
        {
            if (v3[i] != s1[i])
            {
                mi2++;
            }
        }

        x = a;
        for (int i = 0; i < n && x > 0; i += 2)
        {
            v4[i] = 'A';
            x--;
        }
        j = 1;
        while (x > 0)
        {
            v4[j] = 'A';
            x--;
            j += 2;
        }
        for (int i = 0; i < n; i++)
        {
            if (v4[i] != 'A')
                v4[i] = 'B';
        }
        for (int i = 0; i < n; i++)
        {
            if (v4[i] != s1[i])
            {
                mx2++;
            }
        }

        // cout << mi1 << " " << mx1 << " " << mi2 << " " << mx2 << "\n";

        if(n==2){
            ans.insert(mi1);
            ans.insert(mi2);
            ans.insert(mx1);
            ans.insert(mx2);
        }
        else
        {
            for (int i = mi1; i <= mx1; i+=2)
                ans.insert(i);

            for (int i = mi2; i <= mx2; i+=2)
                ans.insert(i);
        }
        cout<<ans.size()<<'\n';
        for(auto i:ans)
        cout<<i<<" ";
        cout<<"\n";
    }
}