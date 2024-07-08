#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> C(N);
    for (int i = 0; i < N; ++i) {
        cin >> C[i];
    }

    sort(C.begin(), C.end());

    int totalDye = 0;
    for (int i = 0; i < N; ++i) {
        if (i >= M) {
            totalDye += C[i];
        }
    }

    cout << totalDye << endl;
    return 0;
}
