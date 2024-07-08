#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int n, k;
        cin >> n >> k; // String length and constant k

        string s;
        cin >> s; // Input string

        // Initialize an array to store the count of each character
        vector<int> charCount(26, 0);

        // Count the occurrences of each character in the string
        for (char c : s) {
            charCount[c - 'a']++;
        }

        // Check if it's possible to make all characters equal
        bool possible = true;
        for (int i = 0; i < 26; ++i) {
            if (charCount[i] % k != 0) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << "-1\n"; // Not possible
        } else {
            // Calculate the minimum number of operations
            int minOperations = 0;
            for (int i = 0; i < 26; ++i) {
                minOperations += charCount[i] / k;
            }
            cout << minOperations << "\n";
        }
    }

    return 0;
}
