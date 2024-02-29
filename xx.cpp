#include <iostream>
#include <string>
using namespace std;

// A function that returns the minimum number of operations
// needed to remove all black cells
int minOperations(string s, int k) {
  int ans = 0; // Initialize the answer
  int n = s.length(); // Get the length of the string
  // Loop through the string from left to right
  for (int i = 0; i < n; i++) {
    // If the current cell is black, increment the answer and skip the next k - 1 cells
    if (s[i] == 'B') {
      ans++;
      i += k - 1;
    }
  }
  // Return the final answer
  return ans;
}

// The main function that reads the input and prints the output
int main() {
  int t; // The number of test cases
  cin >> t; // Read the number of test cases
  // Loop through each test case
  while (t--) {
    int n, k; // The length of the paper and the integer used in the operation
    cin >> n >> k; // Read n and k
    string s; // The input string
    cin >> s; // Read s
    cout << minOperations(s, k) << endl; // Print the output
  }
  return 0;
}
