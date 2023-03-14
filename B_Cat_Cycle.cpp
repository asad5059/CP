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
        ll n, k;
        cin >> n >> k;
        ll posA = n, posB = 1;
        if (n % 2 == 0)
        {
            if (k % n == 0)
                cout << k << endl;
            else
                cout << k % n << endl;
        }
        else
        {
            ll mid = (n - 1) / 2;
            mid++;
            posA = k % n;
            if (posA == 0)
                posA = n;
            //cout<<mid<<" "<<posA<<endl;
            if (k < mid)
                cout << posA << endl;
            else if (k % n == 0)
            {
                cout << 2 << endl;
            }
            else
            {
                if (posA == mid)
                    cout << mid + 1 << endl;
                else
                {
                    posA = k % n;
                    
                }
            }
        }
    }
}