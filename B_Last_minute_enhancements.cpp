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
        ll n,x,s=0;
        cin>>n;
        map <ll,ll> mp;
        set <ll> st;
        set <ll>::iterator itx;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            mp[x]++;
        }
        for(auto it : mp)
        {
            if(it.ss>=2)
            {
                st.insert(it.ff);
                st.insert(it.ff+1);
            }
            else
            {
                itx=st.find(it.ff);
                if(itx!=st.end())
                {
                    st.insert(it.ff+1);
                }
                else
                {
                    st.insert(it.ff);
                }
                
            }
            
        }
        cout<<st.size()<<endl;
    }
}
