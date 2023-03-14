#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll lcm(ll a, ll b)
{
    return (a * (b /__gcd(a, b)));
}
ll fix_mod(ll a,ll b)
{
    return (a%b+b)%b;
}
void fastio()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
}
int main()
{
    fastio();
    ll t;
    cin>>t;
    vector <string> v[5]={{"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    ,{"aa","ab","ac","ad","ae","af","ag","ah","ai","aj","ak","al","am","an","ao","ap","aq","ar","as","at","au","av","aw","ax","ay","az"},
    ,{"aaa","aab","aac","aad","aae","aaf","aag","aah","aai","aaj","aak","aal","aam","aan","aao","aap","aaq","aar","aas","aat","aau","aav","aaw","aax","aay","aaz"},
    ,{"aaaa","aaab","aaac","aaad","aaae","aaaf","aaag","aaah","aaai","aaaj","aaak","aaal","aaam","aaan","aaao","aaap","aaaq","aaar","aaas","aaat","aaau","aaav","aaaw","aaax","aaay","aaaz"},
    ,{"aaaaa","aaaab","aaaac","aaaad","aaaae","aaaaf","aaaag","aaaah","aaaai","aaaaj","aaaak","aaaal","aaaam","aaaan","aaaao","aaaap","aaaaq","aaaar","aaaas","aaaat","aaaau","aaaav","aaaaw","aaaax","aaaay"}};
    while (t--)
    {
        ll n;
        cin>>n;
        string s,s1;
        cin>>s;
    }
    
}