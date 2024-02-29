#include<bits/stdc++.h>
#include<string>
using namespace std;
void answer()
{
    int n,m;
    cin>>n>>m;
    string me,U;
    unordered_map<string,string> u;
    for(int i=0; i<m; i++)
    {
        cin>>me>>U;
        if(me.length()<=U.length())
            u[me]=me;
        else
            u[me]=U;
    }
    string us;
    for(int j=0; j<n; j++)
    {
        cin>>us;
        cout<<u[us]<<" ";
    }
}
int main()
{
    answer();
}
