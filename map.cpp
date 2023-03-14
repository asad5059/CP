    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        multimap<string,string> mp;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string x,y;
            cin>>x>>y;
            mp.insert(make_pair(x,y));
        }
        for(auto it : mp)
        {
            cout<< it.first<<" = "<<it.second<<endl;
        }
    }