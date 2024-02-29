//Coded by..<<TheAnonymousAMGR>>..
//..<<CSTE>>..
#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main ()
{
    string a,b,c;
    cin>>a>>b>>c;
    string d=a+b;
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    if(c==d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
