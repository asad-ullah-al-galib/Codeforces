//Coded by..<<TheAnonymousAMGR>>..
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    string rima;
    cin>>rima;
    for(int i=0; i<rima.size(); i++)
    {
        if (rima[i]=='.')
        {
            cout<<'0';
        }
        else if (rima[i]=='-'&& rima [i+1]=='.'){
            cout<<'1';
            ++i;
        }
        else
        {
            cout<<'2';
            ++i;
        }
    }


}
