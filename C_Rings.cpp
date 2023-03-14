#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define INF 1e18
#define ss second
using namespace std;
using namespace __gnu_pbds;
template <typename PB>
using ordered_set = tree<PB, null_type, less_equal<PB>, rb_tree_tag, tree_order_statistics_node_update>;
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
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    //#endif
}
bool f1(string s)
{
   int n = s.length();
	int here = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0')
			here++;
		else
			here = 0;
		if (here == n / 2) {
			cout << i - here + 2 << " " << i + 1 << " ";
			cout << 1 << " " << n;
			return true;
		}
	}
	return false;
}
bool f2(string s)
{
    int n = s.length();
	for (int i = n / 2; i < n; i++) {
		if (s[i] == '0') {
			cout << 1 << " " << i + 1 << " ";
			cout << 1 << " " << i;
			return true;
		}
	}
	return false;
}
bool f3(string s)
{
    int n = s.length();
	int mid = (n - 1) / 2;
	if (s[mid] == '1') {
		cout << mid + 1 << " " << n - 1 << " ";
		cout << mid + 2 << " " << n;
	} else {
		cout << mid + 1 << " " << n << " ";
		cout << mid + 2 << " " << n;
	}
	return true;
}
int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        if (!f1(s))
        {
            if (!f2(s))
            {
                f3(s);
            }
        }
        cout << "\n";
    }
}

// 110 11

// 5/2 = 2
// 11 110