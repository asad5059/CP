//Bishmillahir Rahmanir Raheem
//sajeedreefy
#include<bits/stdc++.h>
using namespace std;
#define SZ 100000
typedef long long int ll;
#define pb push_back
#define pf push_front
#define ull unsigned long long
#define mp make_pair
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
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

//ll arr[SZ];
signed main()
{
    fastIO();
    ll n,t=1,mini,mx,q,c,i,j,k,m,count,y,x,sum;
    string st,stt,ts;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        while(n--)
        {
            cin >> x;
            c=0;
            if((m==1 || x%m==0) and x>=m)
            {
                cout << "YES" << endl;
                continue;
            }
            if(x<m)
            {
               cout << "NO" << endl;
               continue;
            }

            c=0;
            y=x%m;
            k=x/m;
            q=k;
            k=k*m;
            ll temp=k;
            for(i=0;i<=q;i++)
            {
                
                temp=k;
                temp=temp-(i)*m;
                temp=temp+y;
                while(temp)
                {
                    if((temp%10)==m)
                    {
                        c=1;
                        break;
                    }
                    temp=temp/10;
                }
                if(c) { break; }
            }
            if(c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}