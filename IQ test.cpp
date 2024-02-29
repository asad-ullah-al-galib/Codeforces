#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a=0,b=0;
    cin>>n;
    int ara[n];
    for (int i=0;i<n;i++){
        cin>>ara[i];
        if (ara[i]%2==0){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b)
    {
        for(int i=1;i<=n;i++)
        {
            if (ara[i]%2!=0)
            {
               cout<<i+1;
                break;
            }
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if (ara[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }
}

