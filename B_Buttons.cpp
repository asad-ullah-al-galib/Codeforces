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
    /*
    2
    W
    R R
    ** 2+1*(2-1)==3
    3
    W1
    W2
    R W
    R R R

    ** 3+1*(3-1)+2*(3-2)==7
    */

   int n;
   cin>>n;
   int hauya=n;
   for(int i=1;i<n-1;i++)
   {
    hauya+=(n-i)*i;
   }
   cout<<hauya;

}