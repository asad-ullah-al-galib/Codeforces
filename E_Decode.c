#include <stdio.h>

const int MOD = 1000000007;

int main() {
    int testCases;
    scanf("%d", &testCases);

    while (testCases--) {
        char binaryString[100005];
        scanf("%s", binaryString);

        int n = 0;
        for (int i = 0; binaryString[i] != '\0'; i++) {
            n++;
        }

        int prefixSum[100005] = {0};
        int count[200005] = {0};

        // Calculate prefix sum
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + (binaryString[i] == '1' ? 1 : -1);
        }

        long long answer = 0;
        for (int j = 1; j <= n; j++) {
            // Update count array
            count[prefixSum[j - 1] + n] += j;

            // Calculate answer
            answer = (answer + (long long)count[prefixSum[j] + n] * (n - j + 1)) % MOD;
        }

        printf("%lld\n", answer);
    }

    return 0;
}
