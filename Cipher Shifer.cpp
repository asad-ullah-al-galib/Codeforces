#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1="";

        for(int i=0;i<n;i++)
        {
            s1+=s[i];
            for(int j=i+1;j<n;j++)
            {
                if(s[j]==s[i])
                {
                    i=j;
                    break;
                }
            }
        }
        cout<<s1<<endl;
    }
}
