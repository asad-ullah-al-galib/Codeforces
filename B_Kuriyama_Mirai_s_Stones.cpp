// Bismillahir Rahmanir Raheem
/**
 * author:TheAnonymousAMGR
 **/
// CSTE
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define F first
#define S second
#define bit(a) __builtin_popcount(a)
#define w(x) while (x--)
#define loop for (int i = 0; i < n; i++)
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pr pair<int, int>
#define AMGR() (ios_base::sync_with_stdio(false), cin.tie(NULL))
const int D = 1e5+5;
ll ar[D];
ll pre1[D];
ll pre2[D];
int main()
{
    int n;
    scanf("%n",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
        pre1[i]=pre1[i-1]+ar[i];
    }
    sort(ar+1,ar+n+1);
    for(int i=1;i<=n;i++)
    {
        pre2[i]=pre2[i-1]+ar[i];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int t,l,r;
        scanf("%d%d%d",&t, &l, &r);
        if(t==1)
        {
            cout<<pre1[r]-pre1[l-1]<<endl;
        }
        else
        {
            printf("%lld\n",pre2[r]-pre2[l-1]);
        }
    }
}
// int main()
// {
    /*
6
6 4 2 7 2 7
3
2 3 6___ type 2__ sort in non decresing order__ 2 2 4 6 7 7__ 4+6+7+7=24
1 3 4___ type 1__ 2+7=9
1 1 6____type 1__ 6+4+2+7+2+7=28
*/
    // int n;
    // cin >> n;

    // ll br[n + 2];
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> ar[i];
    //     // br[i] = ar[i];
    //     pre1[i] = pre1[i - 1] + ar[i];
    // }
    // ll pre1[n + 2];
    // pre1[0] = 0;
    // for (int i = 1; i <= n; i++)
    //{
    //     pre1[i] = pre1[i - 1] + ar[i];
    // }
    //sort(ar + 1, ar + n + 1);
    // ll pre2[n + 2];
    // pre2[0] = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         pre2[i] = pre2[i - 1] + ar[i];
//     }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         if (a = 1)
//         {
//             cout << pre1[c] - pre1[b - 1] << endl;
//         }
//         else
//         {
//             cout << pre2[c] - pre2[b - 1] << endl;
//         }
//     }
// }
