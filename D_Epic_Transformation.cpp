#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
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
        vector <ll> v(n);
        vector<pair<ll,ll>> vp;
        map <ll,ll> mp;
        set <ll> st,st2;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            st2.insert(v[i]);
            mp[v[i]]++;
        }
        for(auto it:mp)
        {
            vp.pb({it.ss,it.ff});
            st.insert(it.ss);
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        
        for(int i=0;i<vp.size();i++)
        {
            for(int j=0;j<vp.size();j++)
            {
                if(i==j) continue;
                else if(vp[i].ff-vp[j].ff==0)
                {
                    vp[i].ff-=vp[j].ff;
                    vp[j].ff=0;
                    break;
                }
                else if(vp[i].ff-vp[j].ff<0)
                continue;
                else if(vp[i].ff-vp[j].ff>0)
                {
                    vp[i].ff-=vp[j].ff;
                    vp[j].ff=0;
                }
            }
        }
        ll cnt=0;
        for(int i=0;i<vp.size();i++)
        {
        cnt+=vp[i].ff;
        // cout<<vp[i].ff<<" ";
        }
        // cout<<endl;
        if(st.size()==1 && st2.size()>1) cnt=0;
        cout<<cnt<<endl;
    }
}