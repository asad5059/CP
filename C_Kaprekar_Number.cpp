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
    ll n, k, ans, g1 = 0, g2 = 0,r,x;
    cin >> n >> k;
    ans = n;
    for (int j = 1; j <= k; j++)
    {
        g1=0;
        g2=0;
        x=ans;
        string gs1;
        while (x)
        {
            r = x % 10;
            gs1 += r + '0';
            x /= 10;
        }
        sort(gs1.begin(),gs1.end());
        int cnt = 1;
        for (int i = gs1.size() - 1; i >= 0; i--)
        {
            g1 += (gs1[i] - '0') * cnt;
            cnt *= 10;
        }
        cnt=1;
        for (int i = 0; i<gs1.size(); i++)
        {
            g2 += (gs1[i] - '0') * cnt;
            cnt *= 10;
        }
        //cout<<g1<<" "<<g2<<endl;
        ans=g2-g1;
    }
    cout<<ans;
}