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
    AMGR();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<long long> prev(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prev[i + 1] = prev[i];
            if (i % 2 == 0)
            {
                prev[i + 1] += a[i];
            }
            else
            {
                prev[i + 1] -= a[i];
            }
        }

        unordered_map<long long, int> cnt;
        cnt[0] = 1;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (cnt.count(prev[i + 1]))
            {
                found = true;
                break;
            }
            cnt[prev[i + 1]] = 1;
        }

        if (found)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
