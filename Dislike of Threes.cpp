#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        for(int i=1;; i++)
        {
            if(i%3==0||i%10==3)
            {
                continue;
            }
            else
            {
                --a;
                if(a==0)
                {
                    cout<<i<<"\n";
                    break;
                }
            }
        }
    }
}
