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
    string s, s2 = "xy";
    cin >> s;
    bool f = true;
    while (f)
    {
        std::size_t found = s.find(s2);
        if (found != std::string::npos)
        {
            replace(s.find(s2),s.length()," ");
            f=true;
        }
        else
        {
            f=false;
        }
        
    }
}
