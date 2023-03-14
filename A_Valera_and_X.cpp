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
    ll n,cnt=0,cnt2=0;
    cin>>n;
    char a[n][n];
    set <char> s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            s.insert(a[i][j]);
        }
    }
    bool f=true;
    char x=a[0][0];
    int p=0,q=0;
    for(int i=0;i<n;i++)
    {
        if(a[p][q]!=x)
        {
            f=false;
            cout<<"NO";
            return 0;
        }
        p++;
        q++;
        cnt++;
    }
    p=n-1;
    q=0;
    for(int i=0;i<n && f;i++)
    {
        if(a[p][q]!=x)
        {
            f=false;
            cout<<"NO";
            return 0;
        }
        p--;
        q++;
        cnt++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==x) cnt2++;
        }
    }
    if(f && s.size()==2 && cnt-1==cnt2) cout<<"YES";
    else cout<<"NO";
   
}
