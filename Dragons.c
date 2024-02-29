#include <stdio.h>

int main() {
    int s, n;
    scanf("%d %d", &s, &n);
    int d[n][2];
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &d[i][0], &d[i][1]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (d[j][0] > d[j + 1][0]) {
                int temp[2];
                temp[0] = d[j][0];
                temp[1] = d[j][1];
                d[j][0] = d[j + 1][0];
                d[j][1] = d[j + 1][1];
                d[j + 1][0] = temp[0];
                d[j + 1][1] = temp[1];
            }
        }
    }
    int DefeatAllDragons = 1;
    for (int i = 0; i < n; ++i) {
        if (s <= d[i][0]) {
            DefeatAllDragons = 0;
            break;
        } else {
            s += d[i][1];
        }
    }
    if (DefeatAllDragons) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

