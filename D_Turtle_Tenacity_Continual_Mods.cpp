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
// int main() {
    

//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for(int i=0; i<n; i++) cin >> a[i];

//         sort(a.begin(), a.end());

//         int res=(a[0]<a[1]);
//         for(int i=1;i<n;i++)
//         {
//             if(a[i]%a[0])
//             {
//                 res=1;
//             }
//         }
//         if(res) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
// }
// //khankir polar logic raat 4:45 e aite parle contest er somoy ase na keno??????????

//             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+
/**
* author:TheAnonymousAMGR
**/
//CSTE
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
#define loop1 for(int i=1;i<n;i++)
#define str string s;cin>>s;
#define tc int tc;cin>>tc;while(tc--)
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
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int choto= *min_element(v.begin(),v.end());
    //int mot=count(v.begin(),v.end(),min);
    if (count(v.begin(), v.end(), choto) == 1) {
        cout << "YES" << endl;
        return;
    }

    loop 
    {
        if(v[i] % choto !=0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO" << endl;
}
int main()
{
    AMGR();
    tc
    answer();
}