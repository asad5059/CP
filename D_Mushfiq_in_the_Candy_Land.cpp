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
int main()
{
    fastio();
    int n, m,x;
    cin>>n>>m;
    bool chk[n] {false};
    vector <ll> v(n),ans(n+5);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (chk[v[i]]==false)
        {
            chk[v[i]] = true;
            ans[i] = ans[i + 1] + 1;
        }
        else
        {
            ans[i] = ans[i + 1];
        }
    }
    while (m--)
    {
        cin>>x;
        cout<<ans[x-1]<<"\n";
    }
    return 0;
}
