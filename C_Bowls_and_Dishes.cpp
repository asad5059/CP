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
    ll n, m, x, y;
    cin >> n >> m;
    map<ll, ll> dish, freq;
    vector <pair<ll,ll>> con;
    for (int i = 1; i <= n; i++)
    {
        dish.insert({i, 0});
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        freq[x]++;
        freq[y]++;
        con.pb({x,y});
    }
    ll k;
    cin >> k;
    for (int j = 0; j < k; j++)
    {
        cin >> x >> y;
        if (dish[x] == 0 && dish[y] == 0)
        {
            if (freq[x] >= freq[y])
            {
                dish[x] = 1;
            }
            else
            {
                dish[y] = 1;
            }
        }
        else if (dish[x] == 0 && dish[y] > 0)
        {
            dish[x] = 1;
        }
        else if (dish[y] == 0 && dish[x] > 0)
        {
            dish[y] = 1;
        }
    }
    ll cnt = 0;
    for (auto it : con)
    {
        //cout<<it.ff<<" "<<it.ss<<"\n";
        if (dish[it.ff] == 1 && dish[it.ss] == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
}
