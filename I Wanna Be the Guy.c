
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    bool levels[n + 1];
    for (int i = 0; i <= n; ++i) {
        levels[i] = false;
    }

    int p;
    scanf("%d", &p);
    for (int i = 0; i < p; ++i) {
        int level;
        scanf("%d", &level);
        levels[level] = true;
    }

    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; ++i) {
        int level;
        scanf("%d", &level);
        levels[level] = true;
    }

    bool canPassAllLevels = true;
    for (int i = 1; i <= n; ++i) {
        if (!levels[i]) {
            canPassAllLevels = false;
            break;
        }
    }

    if (canPassAllLevels) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}
