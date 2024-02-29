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
void amgr()
{
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll mint = arr[0];
    ll maxt = arr[0];
    for (ll i = 1; i < n; i++)
    {
        mint = min(mint, arr[i]);
        maxt = max(maxt, arr[i]);
    }
    vector<ll> ans;
    while (mint != maxt)
    {
        if (mint % 2 == maxt % 2)
        {
            ans.push_back(0);
        }
        else if (maxt % 2 == 0)
        {
            ans.push_back(1);
            mint += 1;
            maxt += 1;
        }
        else ans.push_back(0);
        maxt /= 2;
        mint /= 2;
    }
    cout << ans.size() << endl;
    if (ans.size() > n)return;
    for (auto i : ans)
    cout << i << " ";
    cout << endl;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        amgr();
    }
}