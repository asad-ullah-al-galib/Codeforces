#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>me;
    int U;
    for(int i=0;i<3;i++)
    {
       /* me.push_back(6);
        me.push_back(4);
        me.push_back(3);
        cout<<me<<endl;
        */
        cin>>U;
        me.push_back(U);
    }
    sort(me.rbegin(),me.rend());
    me.erase(me.begin());
    me.insert(me.begin(), 5);
    me.emplace_back(20);
    //cout<<me<<endl;
    for(int i=0;i<me.size();i++)
    {
        cout<<me[i]<<" ";
    }
    return 0;
}
