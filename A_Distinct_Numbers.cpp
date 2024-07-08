#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // vector<int>v;
    // for(auto &e : v)
    // {
    //     cout<<e;
    // }
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int res=s.size();
    cout<<res<<endl;
}