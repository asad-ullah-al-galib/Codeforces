#include<bits/stdc++.h>
using namespace std;
long long n, k, PB, PS;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
    
        cin >> n >> k >> PB >> PS;
        vector<long long> p(n+1), a(n+1);
        for(long long i = 1; i <= n; i++) {
            cin >> p[i];
        }
        for(long long i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<long long> scoreB(n+1, 0), scoreS(n+1, 0);
        while(k--) {
            scoreB[PB] += a[PB];
            scoreS[PS] += a[PS];
            PB = p[PB];
            PS = p[PS];
        }

        if(scoreB[PB] > scoreS[PS]) {
            cout << "Bodya\n";
        } else if(scoreB[PB] < scoreS[PS]) {
            cout << "Sasha\n";
        } else {
            cout << "Draw\n";
        }
    }

    return 0;
}