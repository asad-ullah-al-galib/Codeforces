//Coded By..<<TheAnonymousAMGR>>..
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,m,ans;
    cin>>n>>a;
    int arr[a];
    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    m=arr[a-1]-arr[0];
    for (int i=n; i<=a; i++)
    {
        ans=arr[i-1]-arr[i-n];
        ans=abs(ans);
        m=min (m,ans);
    }
    cout<<m;
}
