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
        string s;
        cin >> s;

        unordered_set<string> syllables = {"ba", "be", "de", "ca", "ce", "da", "bab", "bac", "cab", "bad", "dab", "cad", "dae", "cac", "dad", "beb", "bec", "ceb", "bed", "deb", "ced", "dec", "cec", "ded"};
        string res = "";
        for(int i = 0; i < n; i++) {
            res += s[i];
            if(i < n - 1 && syllables.count(s.substr(i, 2))) {
                res += '.';
                i++;
            }
            else if(i < n - 2 && syllables.count(s.substr(i, 3))) {
                res += '.';
                i += 2;
            }
        }

        cout << res << "\n";
    }

    return 0;
}

