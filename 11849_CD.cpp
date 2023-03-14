#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
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
    int N, M;
    while (cin >> N >> M, N)
    {
        set <int> s;
        int x;
        while(N--)
        {
            cin>>x;
            s.insert(x);
        }
        int cnt=0;
        while(M--)
        {
            cin>>x;
            if(s.find(x)!=s.end())
            cnt++;
        }
        cout<<cnt<<'\n';
        s.clear();
    }    
    
}
