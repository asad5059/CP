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
    //fastio();
    int t;
    cin >> t;
    int pqr = 1;
    while (pqr<=t)
    {
        vector<string> v, v1,v3;
        set<string> st;
        int a,b;
        cin>>a>>b;
        cin.ignore();
        for (int j = 0; j < a; j++)
        {
            string s;
            getline(cin,s);
            v.pb(s);
        }
        for (int j = 0; j < b; j++)
        {
            string s;
            getline(cin,s);
            v1.pb(s);
        }
        for (int j = 0; j < v.size(); j++)
        {
            for (int k = 0; k < v1.size(); k++)
            {
                st.insert(v[j] + v1[k]);
            }
        }
        
        cout << "Case " << pqr << ": " << st.size() << "\n";
        pqr++;
    }
}