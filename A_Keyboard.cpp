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
    char ch;
    string s;
    cin >> ch >> s;
    string a, b, c;
    a = "qwertyuiop";
    b = "asdfghjkl;";
    c = "zxcvbnm,./";
    if (ch == 'R')
    {
        for (ll i = 0; i < s.size(); i++)
        {
            size_t found = a.find(s[i]);
            size_t found2 = b.find(s[i]);
            size_t found3 = c.find(s[i]);
            if (found != string::npos)
                cout << a[found - 1];
            else if (found2 != string::npos)
                cout << b[found2 - 1];
            else if (found3 != string::npos)
                cout << c[found3 - 1];
        }
    }
    else
    {
        for (ll i = 0; i < s.size(); i++)
        {
            size_t found = a.find(s[i]);
            size_t found2 = b.find(s[i]);
            size_t found3 = c.find(s[i]);
            if (found != string::npos)
                cout << a[found + 1];
            else if (found2 != string::npos)
                cout << b[found2 + 1];
            else if (found3 != string::npos)
                cout << c[found3 + 1];
        }
    }
}
