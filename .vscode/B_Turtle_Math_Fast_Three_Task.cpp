// // Bismillahir Rahmanir Raheem
// /**
// * author:TheAnonymousAMGR
// **/
// //CSTE
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// #define MOD 1000000007
// #define pb push_back
// #define vi vector<int>
// #define vl vector<ll>
// #define F first
// #define S second
// #define bit(a)   __builtin_popcount(a)
// #define w(x) while(x--)
// #define loop for(int i=0;i<n;i++)
// #define srt(v) sort(v.begin(),v.end());
// #define rsrt(v) sort(v.rbegin(),v.rend());
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) (a*b)/gcd(a,b)
// #define PI 2*acos(0.0)
// #define pr pair<int,int>
// #define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         int res=0;
//         loop 
//         {
//             cin>>a[i];
//             res+=a[i];
//         }
//         cout<<res<<endl;
//     }
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int r = sum % 3;
        if(r == 0) {
            cout << 0 << "\n";
        }
        else if(r==2)
        {
            cout<<1<<endl;
        }
         else {
            int cnt = 2;
            for(int i=0; i<n; i++) {
                if(a[i] % 3 == r) cnt=1;
            }
            cout<<cnt<<endl;
            // if(cnt > 0) {
            //     cout << 1 << "\n";
            // } else {
            //     cout << 2 << "\n";
            // }
           //cout<<2<<endl;
        }
    }
}
// #include "bits/stdc++.h"

// using namespace std;

// #define ll long long

// int main() {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
  
//   int t; cin >> t;
//   while (t--) {

//     int n; cin >> n;

//     vector<ll> a(n);
//     ll tot = 0;
//     for (ll &i : a) {
//       cin >> i;
//       tot += i;
//     }

//     if (tot % 3 == 0) {
//       cout << "0\n";
//     }
//     else if (tot % 3 == 2) {
//       cout << "1\n";
//     }
//     else {

//       int ok = 2;
//       for (ll x : a) {
//         if (x % 3 == tot % 3) {
//           ok = 1;
//         }
//       }

//       cout << ok << "\n";

//     }

//   }
  
// }

