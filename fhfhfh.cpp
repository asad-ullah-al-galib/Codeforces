#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> odd_indices, even_indices;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even_indices.push_back(a[i]);
            else
                odd_indices.push_back(a[i]);
        }

        int cnt = 0, cnt1 = 0;
        for (int i = 0; i < even_indices.size() - 1; i++)
        {
            if (even_indices[i] < even_indices[i + 1])
            { cnt++;}
                else
                {
                    cnt=0;
                }
        }
        for (int i = 0; i < odd_indices.size() - 1; i++)
        {
            if (odd_indices[i] < odd_indices[i + 1])
            {
                cnt1++;
            }
                else
                {
                    cnt1=0;
                }
        }

        cout << cnt + cnt1 << "\n";
    }
    return 0;
}

