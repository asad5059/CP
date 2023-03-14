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
    while(t--)
    {
        ll n;
        cin>>n;
        string b;
        cin>>b;
        int now,prev;
        cout<<1;
        prev=b[0]-'0';
        prev++;
        for(int i=1;i<n;i++)
        {
            now=b[i]-'0';
            if(now+1!=prev)
            {
                cout<<1;
                prev=now+1;
            }
            else if(now+1==prev)
            {
                cout<<0;
                prev=now+0;
            }
        }
        cout<<"\n";
    }
}