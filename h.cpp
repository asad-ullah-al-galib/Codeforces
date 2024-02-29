#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        for(int i=0; i<n; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        if(b[0] != 1 || b[n-1] > 2023) {
            cout << "NO" << endl;
            continue;
        }
        int prod = 1;
        for(int i=0; i<n; i++)
            prod *= b[i];
        if(prod > 2023) {
            cout << "NO" << endl;
            continue;
        }
        vector<int> a = b;
        for(int i=0; i<k; i++)
            a.push_back(1);
        sort(a.begin(), a.end());
        do {
            prod = 1;
            for(int i=0; i<n+k; i++)
                prod *= a[i];
            if(prod == 2023) {
                cout << "YES" << endl;
                for(int i=n; i<n+k; i++)
                    cout << a[i] << " ";
                cout << endl;
                break;
            }
        } while(next_permutation(a.begin(), a.end()));
        if(prod != 2023)
            cout << "NO" << endl;
    }
    return 0;
}

