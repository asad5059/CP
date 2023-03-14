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
    string a, b;
    cin >> a >> b;
    string c = "", d = "";
    ll len = a.size() - 1;
    if ((len + b.size()) % 2 != 0)
    {
        cout << "Impossible";
        return 0;
    }
    else
    {
        ll i=0;
        while(a[i]!='|')
        {
            c+=a[i];
            i++;
        }
        i++;
        while(i<a.size())
        {
            d+=a[i];
            i++;
        }
        if(c.size()<=d.size())
        {
            i=0;
            while(c.size()<d.size())
            {
                c+=b[i];
                i++;
                if(i==b.size())
                {
                    if(c.size()<d.size())
                    {
                        cout<<"Impossible";
                        return 0;
                    }
                    break;
                }
            }
            while(i<b.size())
            {
                if(i%2==0)
                {
                    c+=b[i];
                }
                else
                {
                    d+=b[i];
                }
                i++;
            }
        }
        else
        {
            i=0;
            while(d.size()<c.size())
            {
                d+=b[i];
                i++;
                if(i==b.size())
                {
                    if(d.size()<c.size())
                    {
                        cout<<"Impossible";
                        return 0;
                    }
                    break;
                }
            }
            while(i<b.size())
            {
                if(i%2==0)
                {
                    c+=b[i];
                }
                else
                {
                    d+=b[i];
                }
                i++;
            }
        }
    }
    if(c.size()==d.size()) cout<<c<<"|"<<d;
    else cout<<"Impossible";
}
