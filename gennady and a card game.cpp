#include<bits/stdc++.h>
using namespace std;
int main()
{
    string me;
    cin>>me;
    bool check=false;

    for(int i=0;i<5;i++)
    {
        string U;
        cin>>U;
        if(U[0]==me[0]||U[1]==me[1])
        {
            check=true;
        }
    }
    if(check)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
