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
    string s;
    cin>>s;
    bool f=1;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            if(s[i]>='a' && s[i]<='z')
            f=1;
            else
            {
                f=0;
                break;
            }
        }
        else if(i%2!=0)
        {
            if(s[i]>='A' && s[i]<='Z')
            f=1;
            else
            {
                f=0;
                break;
            }
        }
    }
    if(f)
    cout<<"Yes";
    else
    cout<<"No";
}