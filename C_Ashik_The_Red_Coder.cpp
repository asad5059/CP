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
        ll n;
        cin >> n;
        map <char,int> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for(int i=0;i<s.size();i++)
            {
                mp[s[i]]++;
            }
        }
        bool f=true;
        for(auto it:mp)
        {
            if(it.second%n!=0)
            {
                f=false;
                break;
            }
        }
        if(f)
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
        
    }
}
