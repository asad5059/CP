#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c0, c1, h, ans, cnt0 = 0, cnt1 = 0, mx;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cnt0++;
            else
            {
                cnt1++;
            }
        }
        if (c0 == c1)
            ans = c0 * n;
        else
        {
            ans = min(c0, c1);
            if (ans == c0)
            {
                ans = ans * cnt0;
                mx = min(c1, h);
                if(h*cnt1+cnt1*c0<=cnt1*c1)
                ans=ans+h*cnt1+cnt1*c0;
                else
                {
                    ans+=cnt1*c1;
                }
                
            }
            else
            {
                ans = ans * cnt1;
                mx = min(c0, h);
                if(h*cnt0+cnt0*c1<=cnt0*c0)
                ans=ans+h*cnt0+cnt0*c1;
                else
                {
                    ans+=cnt0*c0;
                }
            }
        }
        cout<<ans<<endl;
    }
}