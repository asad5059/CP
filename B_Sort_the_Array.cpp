#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll n;
    cin>>n;
    vector <ll> a(n),b(n),c;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a.begin(),a.end());
    c=a;
    if(a==b)
    {
        cout<<"yes\n1 1";
        return 0;
    }
    reverse(a.begin(),a.end());
    if(a==b)
    {
        cout<<"yes\n";
        cout<<1<<" "<<n<<"\n";
        return 0;
    }
    a=c;
    c.clear();
    bool f=0;
    int s=-1,e=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i] && f==0)
        {
            f=1;
            c.pb(b[i]);
            s=i+1;
        }
        else if(a[i]!=b[i])
        {
            c.pb(b[i]);
            e=i+1;
        }
        else if(f==1 && a[i]==b[i] && b[i+1]==a[i+1])
        break;
    }
    f=0;
    for(int i=c.size()-1;i>=0;i--)
    {
        if(c[i]>c[i-1] && i>=1)
        {
            f=1;
            break;
        }
    }
    if(f || s==-1 || e==-1)
    cout<<"no";
    else
    {
        cout<<"yes\n";
        cout<<s<<" "<<e;
    }
}