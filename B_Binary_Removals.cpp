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
bool check(string s, int i, int n)
{
    int pre = 0;
    int re = -2;
    while (i < n)
    {
        if (s[i] == '0')
        {
            if(pre!=0)
            {
                if (re == (i - 1))
                {
                    return false;
                }
                re = i;
            }
        }
        else
        {
            if (pre == 0)
            {

                if (re == (i - 1))
                {
                    pre = 1;
                }
                else
                {
                    re = i;
                }
            }
        }
        i++;
    }
    return true;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s, 0, s.length()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}