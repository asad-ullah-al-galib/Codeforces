
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void answer()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total += arr[i];
        }
        ll s = sqrt(total);
        if (pow(s,2) == total)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    answer();
}
