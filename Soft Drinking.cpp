//..<<Coded By TheAnonymousAMGR>>..
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,l,c,d,p,nl,np,milli,slice,salt,ans1,total_milli;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    milli=k*l;
    total_milli=milli/nl;
    slice=d*c;
    salt=p/np;

    ans1=min(min(total_milli,slice),salt)/n;
    cout<<ans1;
}
