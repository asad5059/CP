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
    string s;
    cin >> s;
    int ans = s.size() / 2;
    if (s.size() % 2!=0)
        for (int i = 1; i < s.size(); i++)
            if (s[i] == '1')
            {
                ans++;
                break;
            }
    cout << ans << endl;
}
