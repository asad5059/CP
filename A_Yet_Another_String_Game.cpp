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
    ll t;
    cin >> t;
    while (t--)
    {
        string al = "abcdefghijklmnopqrstuvwxyz";
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == 'a')
                {
                    s[i] = 'b';
                }
                else 
                {
                    s[i]='a';
                }
            }
            else
            {
                if(s[i]=='z')
                {
                    s[i]='y';
                }
                else
                s[i]='z';
            }
        }
        cout<<s<<endl;
    }
}