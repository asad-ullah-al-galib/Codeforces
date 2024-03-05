#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Initialize a set to keep track of unique elements
        set<int> uniqueElements;

        // Initialize an array to store the MEX for each subsegment
        vector<int> mex(n, -1);

        // Traverse the array from left to right
        for (int i = 0; i < n; ++i) {
            uniqueElements.insert(a[i]);

            // If the current element is equal to the size of the set, update the MEX
            if (uniqueElements.size() == i + 1) {
                mex[i] = *uniqueElements.rbegin();
            }
        }

        // Traverse the array from right to left
        for (int i = n - 2; i >= 0; --i) {
            // If the MEX is not already set, update it
            if (mex[i] == -1) {
                mex[i] = mex[i + 1];
            }
        }

        // Find the first occurrence of the MEX
        int firstMex = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] == mex[0]) {
                firstMex = i;
                break;
            }
        }

        // If the MEX is not found, output -1
        if (firstMex == -1) {
            cout << -1 << "\n";
        } else {
            // Output the division into subsegments
            cout << 2 << "\n";
            cout << 1 << " " << firstMex + 1 << "\n";
            cout << firstMex + 2 << " " << n << "\n";
        }
    }

    return 0;
}
