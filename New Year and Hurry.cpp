//Coded by..<<TheAnonymousAMGR>>..
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,xx,count=0;
    cin>>n>>k;
    //remain times
    xx=240-k;
    for(int i=1; i<=n; i++)
    {
        if(xx>=i*5)
        {
            count++;
            //remain time ta komte thakbe..
            xx-=i*5;
        }
        else
        {
            break;
        }
    }
    cout<<count;

}
