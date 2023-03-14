#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, cost_man = 0, cost_auto = 0, cnt1 = 0,cnt2=0, startpos = 0, endpos = 0;
        string s,s2;
        cin >> a >> b;
        cin >> s;
        s2=s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (cnt1 == 0)
                {
                    startpos = i;
                }
                endpos = i;
                cnt1++;
            }
        }
        for(int i=startpos+1;i<endpos;i++)
        {
            if(s[i]=='0')
            s2[i]='1';
        }
        cout<<s2<<endl;
        
    }
}