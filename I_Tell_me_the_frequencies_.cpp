//Bishmillahir Rahmanir Raheem
//sajeedreefy
#include<bits/stdc++.h>
using namespace std;
#define SZ 100000
typedef long long int ll;
#define pb push_back
#define pf push_front
#define ull unsigned long long
//#define mp make_pair
#define fr0(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for (ll i=1;i<=n;i++)
#define ff first
#define ss second
#define mod 1000000007

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

std::string toBinary(ll n)
{
    std::string r;
    while(n!=0)
    {
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    return r;
}


//ll arr[SZ];
signed main()
{
    //fastIO();
    ll n,t=1,mini,mx,q,c,i,j,m,x,d,y,count,qq=0;
    string st,stt,ts;
    //scanf("%lld",&t);
    count=1;
    while(t--)
    {
        while(getline(cin,st))
        {
            if(qq>0)
            cout<<endl;
            ll arr[130]={0};
            map <ll,ll> mp;
            n=st.size();
            fr0(i,n)
            {
                x=st[i];
                //cout << x << endl;
                arr[x]++;
            }
            vector <pair<ll,ll>> vect;
            for(i=1;i<=128;i++)
            {
                if(arr[i]>0)
                {
                    vect.pb(make_pair(arr[i],-i));
                }
            }
            sort(vect.begin(),vect.end());
            for(i=0;i<vect.size();i++)
            {
                cout << -vect[i].ss << " " << vect[i].ff << endl;
            }
            qq++;
        }
    }
    return 0;
}