#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    map<string, int>::iterator it;


    string s;
    cin >> s;
    
    int a = s.size() - 1;
    for (int i = 1; i < s.size(); i++)
    {
        string s2 = s.substr(i, a);
        string s3 = s.substr(0, i);
        sort(s2.begin(), s2.end());
        sort(s3.begin(), s3.end());
        string s4 = s3 + s2;
        mp[s4]++;
    }
    if (s.size() == 1)
        cout << s << endl;
    else
    {
        for (it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first <<endl;
            break;
        }
    }
}