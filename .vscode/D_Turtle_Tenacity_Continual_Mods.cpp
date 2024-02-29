#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int res=(a[0]<a[1]);
        for(int i=1;i<n;i++)
        {
            if(a[i]%a[0])
            {
                res=1;
            }
        }
        if(res) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
