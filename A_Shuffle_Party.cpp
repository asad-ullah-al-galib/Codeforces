#include<bits/stdc++.h>
using namespace std;

int smallestPrimeFactor(int n) {
    if (n % 2 == 0) return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;
    }
    return n;
}

int largestDivisor(int n) {
    return n / smallestPrimeFactor(n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) {
            a[i] = i;
        }
        for(int k = 2; k <= n; k++) {
            int d = largestDivisor(k);
            swap(a[d], a[k]);
        }
        auto it = find(a.begin(), a.end(), 1);
        cout << distance(a.begin(), it) << "\n";
    }

    return 0;
}
