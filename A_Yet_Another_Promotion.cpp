#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string ans;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
        if (i >= 0)
            carry += a[i--] - '0';
        if (j >= 0)
            carry += b[j--] - '0';
        ans += carry % 2 + '0';
        carry /= 2;
    }
    reverse(begin(ans), end(ans));
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}
