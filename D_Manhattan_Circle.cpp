/*             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+             */
/**
* author:TheAnonymousAMGR
**/
/* CSTE */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a)   __builtin_popcount(a)
#define w(x) while(x--)
#define ni int n;cin>>n;
#define nl ll n; cin>>n;
#define loop for(int i=0;i<n;i++)
#define loop1 for(int i=1;i<=n;i++)
#define str string s;cin>>s;
#define test(fn) int t;cin>>t;while(t--) fn();
#define array(arr) int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
#define vec(v) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define lb lower_bound
#define ub upper_bound
#define pr pair<int,int>
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
void answer()
{
    int rows, cols;
        cin >> rows >> cols; 
        int left = cols + 1;
        int right = -1;
        int mot = 0;
        vector<string> grid(rows);
        for (int i = 0; i < rows; ++i) 
        {
            cin >> grid[i];
            grid[i] += '.'; 
        }

       
        for (string row : grid) {
            int f = 0;
            int cnt = 0;
            for (int j = 0; j <= cols; ++j)
            {
                if (row[j] == '#') {
                    cnt++;
                    if (f == 0) {
                        f = 1;
                        left = min(left, j); 
                    }
                } else if (f == 1) {
                    right = max(right, j - 1); 
                    f = 0;
                }
            }
            mot = max(cnt, mot);
        }

        int res = -1;
        
        for (int i = 0; i < rows; ++i) 
        {
            int cnt = 0;
            for (int j = 0; j <= cols; ++j) 
            {
                if (grid[i][j] == '#') {
                    cnt++;
                    if (cnt == mot) 
                    {
                        res = i;
                        break;
                    }
                }
            }
        }
        cout << res + 1 << " " << int((left + 1 + right + 1) / 2) << endl;
}
int main()
{
    AMGR();
    test(answer);
}
/*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */