#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1' && (i == 0 || s[i - 1] == '0')) {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
