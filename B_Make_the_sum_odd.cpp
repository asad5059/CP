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
    cin>>t;
    while (t--)
    {
        ll n,x,cnt_e=0,cnt_o=0;
        cin>>n>>x;
        vector <ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            cnt_e++;
            else
            {
                cnt_o++;
            }
            
        }
        sort(v.begin(),v.end());
        if(cnt_o==0)
        cout<<"No\n";
        else if(n==x)
        {
            if(cnt_o%2!=0)
            cout<<"Yes\n";
            else
            {
                cout<<"No\n";
            }
            
        }
        else
        {
            int f=0;
            for(int i=1;i<=cnt_o;i+=2)
            {
                if(i>x)
                {
                    f=1;
                    cout<<"No\n";
                    break;
                }
                else if((x-i)<=cnt_e)
                {
                    f=1;
                    cout<<"Yes\n";
                    break;
                }
            }
            if(f!=1)
            cout<<"No\n";
            
        }
        
        
        
    }
    
}
