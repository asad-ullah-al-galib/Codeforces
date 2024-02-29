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
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        int oddsum=0,evensum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                evensum+=arr[i];
            }
            else 
            {
                oddsum+=arr[i];
            }
        }
        if(evensum>oddsum)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}
#define r(...) read(__VA_ARGS__)
#define R(type, ...) type __VA_ARGS__; r(__VA_ARGS__)
#define w(...) write(__VA_ARGS__)
#define W(...) write(__VA_ARGS__), write('\n')