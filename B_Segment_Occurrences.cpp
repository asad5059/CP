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
    ll n, m, q, x, y, cnt = 0;
    cin >> n >> m >> q;
    string s, s1;
    cin >> s >> s1;
    for (ll i = 0; i < q; i++)
    {
        cin >> x >> y;
        if (y - x + 1 < m)
            cout << 0 << endl;
        else
        {
            string p = s.substr(x - 1, y - x + 1);
            ll pos = 0;
            cnt=0;
            x:
            for(ll i=pos;i<p.size();i++)
            {
                if(p[i]==s1[0])
                {
                    string p2=p.substr(i,m);
                    if(p2==s1)
                    {
                        //cout<<"For x = "<<x<<" "<<" y = "<<y<<" : "<<p2<<endl;
                        cnt++;
                    }
                    pos=i+s1.size()+1;
                    goto x;
                }
            }
            cout << cnt << endl;
        }
    }
}