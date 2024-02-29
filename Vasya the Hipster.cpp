//Coded By..<<TheAnonymousAMGR>>..
//..<<CSTE>>..
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    if (a>b)
    {
        cout<<b<<" ";
    }
    else
    {
        cout<<a<<" ";
    }
    int left=abs(a-b);
    cout<<left/2;
}
