//Coded by..<<TheAnonymousAMGR>>..
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main ()
{
    int n,cnt=0;
    cin>>n;
    string s[n];
    for (int i=0;i<n;i++)
    {
        cin>>s[i];
        if (s[i]=="Tetrahedron")
        {
            cnt+=4;
        }
        else if (s[i]=="Cube")
        {
            cnt+=6;
        }
        else if (s[i]=="Octahedron")
        {
            cnt+=8;
        }
        else if (s[i]=="Dodecahedron")
        {
            cnt+=12;
        }
        else if (s[i]=="Icosahedron")
        {
            cnt+=20;
        }
    }
    cout<<cnt;
}
