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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        set<int> u;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x;
                x = abs(arr[i] - arr[j]);
                u.insert(x);
            }
        }
        cout << u.size() << endl;
    }
}
/*
1 2 4 5
1 3 4 2 3 1
1 2 3 4==4

*1 3 5
2 4 2
2 4==2

3 4 5 6 8
1 2 4 5 1 2 4 1 3 2 
1 2 3 4 5==5

*/