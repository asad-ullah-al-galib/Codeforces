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
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        int nega=0;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                nega++;
            }
            if(arr[i]==0)
            {
                zero++;
            }
        }
        if(zero!=0)
        {
            cout<<"0"<<endl;
        }
        else 
        {
            if(nega%2==0)
            {
                cout<<"1"<<endl;
                cout<<"1"<<" "<<"0"<<endl;
            }
            else 
            {
                cout<<"0"<<endl;
            }
        }
    }
}
/*Alhamdulliah*/