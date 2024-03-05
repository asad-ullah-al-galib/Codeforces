#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Message {
    int a, b;
};

bool compareByB(const Message& m1, const Message& m2) {
    return m1.b < m2.b;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l;
        cin >> n >> l;

        vector<Message> messages(n);
        for (int i = 0; i < n; ++i) {
            cin >> messages[i].a >> messages[i].b;
        }

        sort(messages.begin(), messages.end(), compareByB);

        vector<vector<int>> dp(n + 1, vector<int>(l + 1, 0));

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j <= l; ++j) {
                dp[i][j] = dp[i - 1][j];
                if (j >= messages[i - 1].b) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - messages[i - 1].b] + messages[i - 1].a);
                }
            }
        }

        cout << dp[n][l] << endl;
    }

    return 0;
}
