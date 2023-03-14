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
set<ll> s{0, 1, 2, 5, 8, 11, 12, 15, 18, 20, 10, 21, 22, 25, 28, 50, 51, 52, 55, 58, 80, 81, 82, 85, 88};
string pqrx;
ll h, m, hh, mm,xh,ym;
bool ok(ll hh, ll mm)
{
    if ((s.find(hh) != s.end()) && (s.find(mm) != s.end()) && hh < h && mm < m)
        return 1;
    else
        return 0;
}
int main()
{
    //fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> h >> m;
        cin >> pqrx;
        hh = ((pqrx[0] - '0') * 10) + ((pqrx[1] - '0'));
        mm = ((pqrx[3] - '0') * 10) + ((pqrx[4] - '0'));
        while (!(ok(hh, mm)))
        {
            mm++;
            if (mm == m)
            {
                mm = 0;
                hh++;
            }
            if (hh == h)
            {
                hh = 0;
            }
        }
        cout << hh << ":" << mm << '\n';
    }
}