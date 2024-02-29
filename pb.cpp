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

void solve()
{
    int amgr;
    cin >> amgr;
    if (amgr > 6 && amgr != 9)
    {
        cout << "YES" << endl;
        int a = 1, b = 2, c = amgr - 3;
        while (c % 3 == 0 || a % 3 == 0 || b % 3 == 0)
        {
            c--;
            b++;
        }
        cout << a << " " << b << " " << c << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    AMGR();
    int t;
    cin >> t;
    w(t)
    {
        solve();
    }
}
