//Coded by..<TheAnonymousAMGR>..
//..<CSTE>..
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,cnt=0,m=1;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i]>=arr[i-1])
        {
            cnt++;
            m=max(m,cnt);
        }
        else
        {
            cnt=1;
        }
    }
    cout<<m;
}
