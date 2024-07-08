#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>

void useless_surtani(int mother_fugger_code_theive)
{
    int n, nn;
    cin >> n >> nn;
    vi v(n);
    for (auto &i : v)
        cin >> i;

    map<int, set<int>> mp;
    for (int x : v)
    {
        if (mp[x % nn].find(x) != mp[x % nn].end())
        {
            mp[x % nn].erase(x);
        }
        else
        {
            mp[x % nn].insert(x);
        }
    }

    int cnt = 0, val = -1;
    for (auto &x : mp)
    {
        int sz = x.second.size();
        if (sz % 2)
        {
            cnt++;
            val = x.first;
        }
    }

    if (cnt > 1)
    {
        cout << -1 << endl;
        return;
    }

    int ans = 0;
    for (auto &x : mp)
    {
        if (x.first == val)
            continue;
        while (x.second.size() > 0)
        {
            int b = *x.second.begin();
            x.second.erase(b);
            if (x.second.size() == 0)
                break;
            int tp = *x.second.begin();
            x.second.erase(tp);
            ans += (tp - b) / nn;
        }
    }

    if (cnt)
    {
        vi v;
        for (int x : mp[val])
            v.push_back(x);
        int m = v.size();
        if (m == 1)
        {
            cout << ans << endl;
            return;
        }
        vi pref(m, 0), suf(m, 0);
        pref[1] = v[1] - v[0];
        for (int i = 3; i < m; i += 2)
        {
            pref[i] = v[i] - v[i - 1] + pref[i - 2];
        }
        suf[m - 2] = v[m - 1] - v[m - 2];
        for (int i = m - 4; i >= 0; i -= 2)
        {
            suf[i] = v[i + 1] - v[i] + suf[i + 2];
        }
        int ta = LLONG_MAX;
        for (int i = 0; i < m; i += 2)
        {
            int x = 0;
            if (i > 0)
                x += pref[i - 1];
            if (i + 1 < m)
                x += suf[i + 1];
            ta = min(ta, x);
        }
        ans += ta / nn;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        useless_surtani(i);
    }

    return 0;
}