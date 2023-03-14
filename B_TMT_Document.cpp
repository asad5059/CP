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

int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s,s1,s2;
        ll cnt = 0, p1 = -1, p2 = -1,p3=-1;
        cin >> n;
        cin >> s;
        s1=s;
        bool f = 1,f2=1,f3=1;
        if (s[0] == 'M' || s[n - 1] == 'M')
            f = 0;
        while (f == 1 && s.size() > 0)
        {
            p1 = -1;
            p2 = -1;
            p3=-1;
            for (int i = 0; i < s.size()-1; i++)
            {
                if (s[i] == 'T' && p1==-1)
                {
                    p1 = i;
                }
                else if (s[i] == 'M' && p1>-1)
                {
                    p2 = i;
                    break;
                }
            }
            if(s[s.size()-1]=='T')
            p3=s.size()-1;

            if (p1 == -1 || p2 == -1 || s[s.size()-1] != 'T')
                f = 0;
            else if (s[s.size()-1] == 'T' && p1 != -1 && p2 != -1 && p3!=-1)
            {
                s.erase(s.begin()+p1);
                s.erase(s.begin()+p2-1);
                s.erase(s.begin()+s.size()-1);
                f = 1;
            }
            // cout<<s<<endl;
        }
        for(int i=2;i<s1.size() && f==0;i+=3)
        {
            if(s1[i]=='T' && s1[i-1]=='M' && s1[i-2]=='T')
            {
                f2=1;
            }
            else
            {
                f2=0;
                break;
            }
        }
        reverse(s1.begin(),s1.end());
        while (f3 == 1 && s1.size() > 0 && f==0 && f2==0)
        {
            p1 = -1;
            p2 = -1;
            p3=-1;
            for (int i = 0; i < s1.size()-1; i++)
            {
                if (s1[i] == 'T' && p1==-1)
                {
                    p1 = i;
                }
                else if (s1[i] == 'M' && p1>-1)
                {
                    p2 = i;
                    break;
                }
            }
            if(s1[s1.size()-1]=='T')
            p3=s1.size()-1;

            if (p1 == -1 || p2 == -1 || s1[s1.size()-1] != 'T')
                f3 = 0;
            else if (s1[s1.size()-1] == 'T' && p1 != -1 && p2 != -1 && p3!=-1)
            {
                s1.erase(s1.begin()+p1);
                s1.erase(s1.begin()+p2-1);
                s1.erase(s1.begin()+s1.size()-1);
                f3 = 1;
            }
            // cout<<s<<endl;
        }
        if (f==1 || f2==1 || f3==1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}