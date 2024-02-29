#include <stdio.h>
int main() {

  int n, k;
  scanf("%d %d", &n, &k);
  int rima[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &rima[i]);
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (rima[i] + k <= 5) {
      count++;
    }
  }
  int ans = count / 3;
  printf("%d\n", ans);

  return 0;
}
