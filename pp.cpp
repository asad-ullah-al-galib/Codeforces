#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        int x = 1;
        for (int i = 0; i < n; i++) {
            while (x == a[i]) {
                x++;
            }
            b[i] = x;
            x++;
        }
        cout << b[n-1] << endl;
    }
    return 0;
}
