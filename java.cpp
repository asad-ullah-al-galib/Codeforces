#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int ties, scarves, vests, jackets, priceTieJacket, priceScarfVestJacket;

  cin >> ties >> scarves >> vests >> jackets >> priceTieJacket >> priceScarfVestJacket;

  // Minimum number of jackets needed to form complete suits
  int minJackets = min({ties, scarves, vests, jackets});

  // Calculate revenue from first type of suit (tie + jacket)
  int revenueTieJacket = minJackets * priceTieJacket;

  // Calculate revenue from second type of suit (scarf + vest + jacket)
  // We can only use jackets remaining after forming tie-jacket suits
  int remainingJackets = jackets - minJackets;
  int revenueScarfVestJacket = min({scarves, vests, remainingJackets}) * priceScarfVestJacket;

  // Total maximum revenue
  int maxRevenue = max(revenueTieJacket, revenueScarfVestJacket);

  cout << maxRevenue << endl;

  return 0;
}
