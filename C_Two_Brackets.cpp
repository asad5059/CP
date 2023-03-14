#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll cnt = 0;
        bool flag = true;
        while (flag != false)
        {
            for (int i = s.size(); i>=0; i--)
            {
                if (s[i] == ']' && (s[i - 1] == '(' || s[i - 1] == '['))
                    {
                        s.erase(i-1,i+1);
                        cnt++;
                    }
                else if (s[i] == ')' && (s[i - 1] == '[' || s[i - 1] == '('))
                    {
                        s.erase(i-1,i+1);
                        cnt++;
                    }
                else
                {
                    flag=false;
                }
                
            }
        }
        cout << cnt << endl;
    }
}