//Coded By..<<TheAnonymousAMGR>>..
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,sum1=0,sum2=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if (a>b)
        {
            sum1++;
        }

        else if (b>a)
        {
            sum2++;
        }
    }
    if (sum1>sum2)
    {
        cout<<"Mishka";
    }
    else if(sum1==sum2)
    {
        cout<<"Friendship is magic!^^";
    }
    else{
        cout<<"Chris";
    }

}
