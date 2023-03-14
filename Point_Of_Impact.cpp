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
    cin >> t;
    while (t--)
    {
        ll n, k, x, y, cnt = 0;
        cin >> n >> k >> x >> y;
        //cout<<x<<" "<<y<<endl;
        while (1)
        {
            if (cnt == k)
                break;
            if (x == 0 && y == 0)
                break;
            if ((x == n && y == 0) || (x == 0 && y == n) || (x == n && y == n))
                break;
            if (cnt % 4 == 0)
            {
                if (x >= y)
                {
                    x +=(n - x);
                    y += (n - x);
                }
                else
                {
                    x += abs(n - y);
                    y += abs(n - y);
                }
                if(x<0) x=0; if(y<0) y=0; if(x>n) x=n; if(y>n) y=n;
                cnt++;
            }
            else if (cnt % 4 == 1)
            {
                x-=(n-y);
                y+=(n-y);
                if(x<0) x=0; if(y<0) y=0; if(x>n) x=n; if(y>n) y=n;
                cnt++;
            }
            else if (cnt % 4 == 2)
            {
                x-=n-x+1;
                y-=n-x+1;
                if(x<0) x=0; if(y<0) y=0; if(x>n) x=n; if(y>n) y=n;
                cnt++;
            }
            else if (cnt % 4 == 3)
            {
                swap(x,y);
                if(x<0) x=0; if(y<0) y=0; if(x>n) x=n; if(y>n) y=n;
                cnt++;
            }
            // cout<<x<<" "<<y<<endl;
        }
        cout << x << " " << y << endl;
        //cout<<"T"<<endl;
    }
}
