#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        char x[30], s[30];
        scanf("%s", x);
        scanf("%s", s);
        int ans = 0;
        while(strstr(x, s) == NULL) {
            strcat(x, x);
            ans++;
            if(strlen(x) > 1e6) {
                ans = -1;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
