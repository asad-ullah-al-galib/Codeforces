#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char a[3][3];
        for (int i = 0; i < 3; i++) {
            scanf("%s", a[i]);
        }
        int x = 0, o = 0, p = 0;
        for (int i = 0; i < 3; i++) {
            if (a[i][0] == a[i][1] && a[i][1] == a[i][2]) {
                if (a[i][0] == 'X') x++;
                else if (a[i][0] == 'O') o++;
                else if (a[i][0] == '+') p++;
            }
            if (a[0][i] == a[1][i] && a[1][i] == a[2][i]) {
                if (a[0][i] == 'X') x++;
                else if (a[0][i] == 'O') o++;
                else if (a[0][i] == '+') p++;
            }
        }
        if (a[0][0] == a[1][1] && a[1][1] == a[2][2]) {
            if (a[0][0] == 'X') x++;
            else if (a[0][0] == 'O') o++;
            else if (a[0][0] == '+') p++;
        }
        if (a[2][0] == a[1][1] && a[1][1] == a[0][2]) {
            if (a[2][0] == 'X') x++;
            else if (a[2][0] == 'O') o++;
            else if (a[2][0] == '+') p++;
        }
        if ((x > 0 && o > 0) || ((x > 1 || o > 1) && p > 0)) printf("X\n");
        else if (x > 1 || o > 1 || p > 1) printf("X\n");
        else if ((x > 0 && p > 0) || (o > 0 && p > 0)) printf("X\n");
        else if ((x > 0 && o == 0 && p == 0) || (x == 0 && o > 0 && p == 0) || (x == 0 && o == 0 && p > 0)) {
            printf("ERROR\n");
        } else {
            if (x > 0) printf("O\n");
            else if (o > 0) printf("+\n");
            else printf("DRAW\n");
        }
    }
    return 0;
}

