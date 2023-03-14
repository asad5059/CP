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
        ll n,k,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flag[26]{0};
        if(n%k!=0) cout<<-1<<endl;
        else
        {
            for(int i=0;i<26;i++)
            {
                if(flag[s[i]-'a']==0) cnt++;
                flag[s[i]-'a']=1;
            }
            if(cnt==1)
            cout<<-1<<endl;
            else
            {
                
            }
        }
    }
}