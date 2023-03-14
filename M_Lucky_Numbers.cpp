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
    int a, b;
    cin >> a >> b;
    int cnt2 = 0;
    for (int i = a; i <= b; i++)
    {
        int cnt = 0;
        if (i == 4 || i == 7)
        {
            cout << i << " ";
            cnt2++;
        }
        else if (i > 9)
        {
            int m = i;
            while (m != 0)
            {
                int p = m % 10;
                m /= 10;
                if (p != 4 && p != 7)
                    cnt++;
            }
            if (cnt == 0)
            {
                cout << i << " ";
                cnt2++;
            }
        }
    }
    if (cnt2 == 0)
    {
        cout << -1;
    }
    cout << endl;
}
