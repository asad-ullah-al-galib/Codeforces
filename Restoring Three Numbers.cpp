//Coded By..<<TheAnonymousAMGR>>..
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rima[4];
    for (int i=0;i<4;i++)
    {
        cin>>rima[i];
    }
    sort(rima,rima+4);
    cout<<rima[3]-rima[0]<<" ";
    cout<<rima[3]-rima[1]<<" ";
    cout<<rima[3]-rima[2]<<" ";
}
