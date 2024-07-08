#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>vec(3);
        for(auto &e : vec) cin>>e;

        // sort(vec.begin(),vec.end());

        // cout<<vec[2]-vec[0]<<endl;

        int res=*max_element(vec.begin(),vec.end());
        int ress=*min_element(vec.begin(),vec.end());

        cout<<res-ress<<endl;
    }
}