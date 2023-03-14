#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
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
int f[10];
int main()
{
    fastio();
    string s;
    set<char> x1, x2;
    ll cnt2 = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'o')
        {
            f[i] = 1;
            cnt2++;
            x1.insert(i+'0');
        }
        else if (s[i] == 'x')
            f[i] = -1;
        else
            f[i] = 0;
    }
    ll cnt = 0;
    bool flg = 1;
    if (cnt2 > 4 )
        flg = 0;
    for (int i = 0; i <= 9999; i++)
    {
        x2.clear();
        flg=1;
        string s2 = "";
        if (i < 10 && f[0]!=-1)
            s2 = "000" + to_string(i);
        else if (i < 100 && f[0]!=-1)
            s2 = "00" + to_string(i);
        else if (i < 1000 && f[0]!=-1)
            s2 = "0" + to_string(i);
        else
            s2 = to_string(i);
        if(s2.size()<4) continue;
        for(auto j:x1)
        {
            if(s2[0]!=j && s2[1]!=j && s2[2]!=j && s[3]!=j)
            {
                flg=0;
                break;
            }
        }
        if (flg)
        {
            cnt++;
            cout<<s2<<"\n";
        }
    }
    cout << cnt;
}
