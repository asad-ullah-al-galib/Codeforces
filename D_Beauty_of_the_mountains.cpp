#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> heights(n, vector<int>(m));
        vector<vector<int>> types(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> heights[i][j];
            }
        }

        for (int i = 0; i < n; ++i) {
            string type;
            cin >> type;
            for (int j = 0; j < m; ++j) {
                types[i][j] = type[j] - '0';
            }
        }

        for (int i = 0; i <= n - k; ++i) {
            for (int j = 0; j <= m - k; ++j) {
                int sum_snowy = 0, sum_non_snowy = 0;
                for (int x = i; x < i + k; ++x) {
                    for (int y = j; y < j + k; ++y) {
                        if (types[x][y] == 0) {
                            sum_snowy += heights[x][y];
                        } else {
                            sum_non_snowy += heights[x][y];
                        }
                    }
                }
                if (sum_snowy == sum_non_snowy) {
                    cout << "YES" << endl;
                    goto next_test_case;
                }
            }
        }
        cout << "NO" << endl;
    next_test_case:
        continue;
    }

    return 0;
}
