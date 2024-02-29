#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int cnt=0,cnt1=0;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cnt++;
        }
        else if(a[i]%2==0 && a[i]%3==0)
        {
            cnt++;
        }
        else if(a[i]%3==0)
        {
            cnt1++;
        }
        else
        {
            cnt==0;
            cnt1==0;
        }
    }
    cout<<cnt<<" "<<cnt1<<endl;
}
