#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            cnt++;
        }
        cout<<ceil((double)cnt/2)<<endl;
    }
}