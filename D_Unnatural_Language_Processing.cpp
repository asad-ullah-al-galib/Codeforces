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
        string str;
        cin >> str;
        for (int i = 0; i + 2 < n; i++)
        {
            cout << str[i];
            if (str[i + 2] == 'a' || str[i + 2] == 'e')
            {
                cout << '.';
            }
        }
        cout << str[n - 2] << str[n - 1];
        cout << endl;
    }
}
//bacedbab
//b
//ba.
//ba.c
//ba.ce
//ba.ced
//ba.ced.b
//last 2 ta change hoy na
//so ba.ced.bad
/*
baba
b
ba
ba.
ba.ba
*/
/*
dac
no changes
*/
/*
dacdac
d
da
dac
dac.
dac.d
dac.dac
*/