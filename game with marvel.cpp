/**
* author:TheAnonymousAMGR
**/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 10;

int t;
ll n;
pair<int, int> a[N];

bool us(pair<int, int> me, pair<int, int> U)
{
    return me.first + me.second > U.first + U.second;
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].first;
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i].second;
        }
        sort (a, a + n, us);

        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += a[i].first - 1;
            }
            else
            {
                sum -= a[i].second - 1;
            }
        }

        cout << sum << endl;
    }
}
//Alhamdulillah
