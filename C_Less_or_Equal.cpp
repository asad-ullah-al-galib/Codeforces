// Bismillahir Rahmanir Raheem
/**
* author:TheAnonymousAMGR
**/
//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    arr[0]=1;
    sort(arr,arr+n+1);
    // int temp;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]<arr[j])
    //         {
    //             temp=arr[i];
    //             arr[j]=arr[i];
    //             arr[j]=temp;
    //         }
    //     }
    // }
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    if(arr[k]!=arr[k+1])0
    {
        cout<<arr[k]<<endl;
    }
    else 
    {
        cout<<"-1"<<endl;
    }

}