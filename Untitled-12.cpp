#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b / __gcd(a, b)));
}
ll fix_mod(ll a, ll b)
{
    return (a % b + b) % b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
set<ll> s;
ll n, k;
void simpleSieve(ll limit, vector<ll> &prime)
{

    vector<bool> mark(limit + 1, true);

    for (int p = 2; p * p < limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i = p * p; i < limit; i += p)
                mark[i] = false;
        }
    }

    for (int p = 2; p < limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
        }
    }
}

void segmentedSieve(ll n)
{
    ll limit = floor(sqrt(n)) + 1;
    vector<ll> prime;
    prime.reserve(limit);
    simpleSieve(limit, prime);

    ll low = limit;
    ll high = 2 * limit;

    while (low < n)
    {
        if (high >= n)
            high = n;
        bool mark[limit + 1];
        memset(mark, true, sizeof(mark));

        for (int i = 0; i < prime.size(); i++)
        {
            ll loLim = floor(low / prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];

            for (int j = loLim; j < high; j += prime[i])
                mark[j - low] = false;
        }
        for (int i = high-1; i >= low; i--)
        {
            if (mark[i - low] == true)
                s.insert(i);
        }
        low = low + limit;
        high = high + limit;
    }
}
int main()
{
    fastio();
    vector <ll> ans;
    cin >> n >> k;
    ll cnt=0;
    segmentedSieve(n);
    for(auto it=s.rbegin();it!=s.rend();it++)
    {
        
        if(cnt==k || *it>n)
        break;
        ans.pb(*it);
        cnt++;
    }
    for(int i=ans.size()-1;i>=0;i--)
    cout<<ans[i]<<" ";

}