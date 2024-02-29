// Bismillahir Rahmanir Raheem
/**
 * author:TheAnonymousAMGR
 **/
// CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define AMGR() (ios_base::sync_with_stdio(false), cin.tie(NULL))
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        // int d=max(a,b)/min(a,b);
        //  if(abs(a-b)<=c*min(a,b))
        //  {
        //      cout<<"YES"<<endl;
        //  }
        //  else
        //  {
        //      cout<<"NO"<<endl;
        //  }
        // cout<<d<<endl;
        ll us;

        if (c == 0)
        {
            if (a == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            ll me = max(a, b);
            ll u = min(a, b);
            c++;
            us = c * u;
            if (us >= me)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
/*
1 0 YES
3 3 YES
6 4 NO
1 0 NO
*/
/*
1-1==0*1
5<2*3
5>4
1>0
*/