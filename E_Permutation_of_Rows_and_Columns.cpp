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
#define loop1 for(int j=0;j<m;j++)
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
    int n, m;
    cin >> n >> m;
    //int matrix[n][m];
    //int matrixx[n][m];
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<vector<int>> matrixx(n, vector<int>(m));
   loop 
    {
         loop1
        {
            cin >> matrix[i][j];
        }
    }
   loop 
    {
        loop1 
        {
            cin >> matrixx[i][j];
        }
    }

    if (n == m) {
        set<set<int>> stt;
        for (auto v : matrix)
        {
            set<int> haate(v.begin(), v.end());
            stt.insert(haate);
        }
        for (auto v : matrixx) {
            set<int> haate(v.begin(), v.end());
            if (stt.find(haate) == stt.end()) 
            {
                cout << "NO" << endl;
                return;
            }
        }
        // Transpose matrix and matrixx
       loop
         {
            for (int j = i+1; j < n; j++) 
            {
                swap(matrix[i][j], matrix[j][i]);
                swap(matrixx[i][j], matrixx[j][i]);
            }
        }
        stt.clear();
        for (auto v : matrix) {
            set<int> haate(v.begin(), v.end());
            stt.insert(haate);
        }
        for (auto v : matrixx) 
        {
            set<int> haate(v.begin(), v.end());
            if (stt.find(haate) == stt.end()) 
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    } 
    else 
    {
        set<set<int>> sett;
        for (auto v : matrix) 
        {
            set<int> haate(v.begin(), v.end());
            sett.insert(haate);
        }
        for (auto v : matrixx) 
        {
            set<int> haate(v.begin(), v.end());
            if (sett.find(haate) == sett.end()) 
            {
                cout << "NO" << endl;
                return;
            }
        }
        sett.clear();
        loop1 
        {
            set<int> haate;
           loop 
            {
                haate.insert(matrix[i][j]);
            }
            sett.insert(haate);
        }
        loop1 {
            set<int> haate;
           loop
            {
                haate.insert(matrixx[i][j]);
            }
            if (sett.find(haate) == sett.end()) 
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}

int main()
{
    AMGR();
    test(answer);
    return 0;
}
