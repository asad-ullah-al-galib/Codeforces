#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int position=s.find('1');
        int possitin=s.find('3');

        if(position<possitin)
        {
            cout<<"13"<<endl;
        }
        else cout<<"31"<<endl;
    }
}