#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int a, b, l;
        cin >> a >> b >> l;
        map<int, int> mp;
        for(int i=0; i<=30; i++) {
            for(int j=0; j<=30; j++) {
                if(pow(a, i) * pow(b, j) <= l) {
                    mp[l - pow(a, i) * pow(b, j)]++;
                }
            }
        }
        cout << mp.size() << "\n";
    }
    return 0;
}
