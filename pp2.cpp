#include <iostream>
#include <vector>

using namespace std;

// A function to find the maximum score for a given vector of cards
int max_score(vector<int> a) {
  // Initialize the score and the index of the current card
  int score = 0;
  int i = 0;

  // Loop until the game ends or there are no more cards left
  while (i < a.size()) {
    // If the current card is odd, add it to the score and remove it from the vector
    if (a[i] % 2 == 1) {
      score += a[i];
      a.erase(a.begin() + i);
    }
    // If the current card is even, remove it from the vector
    else if (a[i] % 2 == 0) {
      a.erase(a.begin() + i);
    }
    // If the current card is zero, end the game
    else {
      break;
    }
  }

  // Return the final score
  return score;
}

// A function to print a vector of cards
void print_vector(vector<int> a) {
  cout << "[";
  for (int i = 0; i < a.size(); i++) {
    cout << a[i];
    if (i < a.size() - 1) {
      cout << ", ";
    }
  }
  cout << "]\n";
}

// The main function
int main() {
  // The number of test cases
  int t;
  cin >> t;

  // Loop for each test case
  for (int k = 0; k < t; k++) {
    // The number of cards in the deck
    int n;
    cin >> n;

    // The vector of cards
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    // Print the vector of cards
    cout << "The deck of cards is: ";
    print_vector(a);

    // Find and print the maximum score
    int score = max_score(a);
    cout << "The maximum score is: " << score << "\n";
  }

  return 0;
}
