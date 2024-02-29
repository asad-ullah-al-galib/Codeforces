#include<bits/stdc++.h>
using namespace std;
void answer()
{
    int t;
    cin>>t;
    while(t--)
    {
        int me,U,us;
        cin>>me>>U>>us;

        if(me==U)
        {
            cout<<us<<endl;
        }
        else if(me==us)
        {
            cout<<U<<endl;
        }
        else 
        {
            cout<<me<<endl;
        }

    }
}
int main()
{
    answer();
}