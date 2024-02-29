// Bismillahir Rahmanir Raheem
// Coded by Ahsanul Imam
// NSTU//CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(x) while (x--)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define Ahsanul (ios_base::sync_with_stdio(false), cin.tie(NULL))
void solve()
{
    int n;
    cin >> n;
    if (n > 6 && n != 9)
    {
        cout << "YES" << endl;
        int a = 1, b = 2, c = n - 3;
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
    int t;
    cin >> t;
    w(t)
    {
        solve();
    }
}
