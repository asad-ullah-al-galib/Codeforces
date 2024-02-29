#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=stoi(s);
        int n= s.size();
        int b=pow(10,n-1);
        cout<<a-b<<endl;
    }
}
