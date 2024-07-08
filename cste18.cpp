// // // // // #include<bits/stdc++.h>
// // // // // using namespace std;
// // // // // bool solve(int n)
// // // // // {
// // // // //     int res = 1;
// // // // //     for (int i = 2; i <= sqrt(n); i++) 
// // // // //     {
// // // // //         if (n % i == 0) 
// // // // //         {
// // // // //             res += i;
// // // // //             if (i != n / i) 
// // // // //             {
// // // // //                 res += n / i;
// // // // //             }
// // // // //         }
// // // // //     }
// // // // //     return res == n;
// // // // // }
// // // // // int main()
// // // // // {
// // // // //     int t;cin>>t;
// // // // //     while(t--)
// // // // //     { 
// // // // //     // int n;
// // // // //     // cin>>n;
// // // // //     //A
// // // // //     // vector<int>v(n);
// // // // //     // for(int i=0;i<n;i++)
// // // // //     // {
// // // // //     //     cin>>v[i];
// // // // //     // }
// // // // //     // //sort(v.begin(),v.end());

// // // // //     // cout<<*max_element(v.begin(),v.end())<<endl;
// // // // //     //C 
// // // // //     // if(n&1) cout<<(n/2)+1 <<" "<<n/2<<endl;
// // // // //     // else cout<<n/2<<" "<<n/2<<endl;
// // // // //     //B

// // // // //     // divisor gula nibo
// // // // //     // 1 kore barabo
// // // // //     // vector<int>v(n);
// // // // //     // for(int i=0;i<n;i++) cin>>v[i];

// // // // //     // // dhukabooooooo
// // // // //     // vector<int>res(n+1,0);
// // // // //     // for(int i=0;i<n;i++)
// // // // //     // {
// // // // //     // for(int j=1;j*j <=n;j++)
// // // // //     // {
// // // // //     //     if(v[i] % j == 0)
// // // // //     //     {
// // // // //     //         res[j]++;
// // // // //     //         if(j!=v[i]/j)
// // // // //     //         {
// // // // //     //             res[v[i]/j];
// // // // //     //         }
// // // // //     //     }
// // // // //     // }
// // // // //     // }

// // // // //     // for(int i=0;i<n;i++)
// // // // //     // {
// // // // //     //     v[i]+=res[v[i]]-1;
// // // // //     // }


// // // // //     // for(int i=0;i<n;i++)
// // // // //     // {
// // // // //     //     cout<<v[i]<<" ";
        
// // // // //     // }
// // // // //     // cout<<endl;
// // // // //     //hedaaaaaaaaaaaaaaaaa
// // // // //     long long n;
// // // // //     cin >> n;
// // // // //     if (solve(n))cout << "YES" <<endl;
// // // // //     else cout << "NO"<<endl;    
// // // // //     }

// // // // // }
// // // // /*             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+             */
// // // // /**
// // // // * author:TheAnonymousAMGR
// // // // **/
// // // // /* CSTE */
// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // typedef long long int ll;
// // // // #define MOD 1000000007
// // // // #define pb push_back
// // // // #define vi vector<int>
// // // // #define vl vector<ll>
// // // // #define F first
// // // // #define S second
// // // // #define bit(a)   __builtin_popcount(a)
// // // // #define w(x) while(x--)
// // // // #define ni int n;cin>>n;
// // // // #define nl ll n; cin>>n;
// // // // #define loop for(int i=0;i<n;i++)
// // // // #define loop1 for(int i=1;i<=n;i++)
// // // // #define str string s;cin>>s;
// // // // #define test(fn) int t;cin>>t;while(t--) fn();
// // // // #define array(arr) int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
// // // // #define vec(v) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
// // // // #define srt(v) sort(v.begin(),v.end());
// // // // #define rsrt(v) sort(v.rbegin(),v.rend());
// // // // #define gcd(a,b) __gcd(a,b)
// // // // #define lcm(a,b) (a*b)/gcd(a,b)
// // // // #define PI 2*acos(0.0)
// // // // #define lb lower_bound
// // // // #define ub upper_bound
// // // // #define pr pair<int,int>
// // // // #define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
// // // // void answer()
// // // // {
// // // //     ni;

// // // //     vector<int> v(n);
// // // //     loop cin >> v[i]; 
    

       
// // // //     for (int l = 1; l <= n; l++)
// // // //     {
// // // //         for (int r = l; r <= n; r += l) 
// // // //         {   
// // // //             for (int i = l - 1; i < r; i++)
// // // //             {
// // // //                 v[i]++;
// // // //             }
// // // //         }
// // // //     }

    
// // // //     loop 
// // // //     {
// // // //         cout << v[i] << " ";
        
// // // //     }
// // // //     cout << endl;
// // // // }
// // // // int main()
// // // // {
// // // //     AMGR();
// // // //     test(answer);
// // // // }
// // // //           /*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */

// // // /*             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+             */
// // // /**
// // // * author:TheAnonymousAMGR
// // // **/
// // // /* CSTE */
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define MOD 1000000007
// // // #define pb push_back
// // // #define vi vector<int>
// // // #define vl vector<ll>
// // // #define F first
// // // #define S second
// // // #define bit(a)   __builtin_popcount(a)
// // // #define w(x) while(x--)
// // // #define ni int n;cin>>n;
// // // #define nl ll n; cin>>n;
// // // #define loop for(int i=0;i<n;i++)
// // // #define loop1 for(int i=1;i<=n;i++)
// // // #define str string s;cin>>s;
// // // #define test(fn) int t;cin>>t;while(t--) fn();
// // // #define array(arr) int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
// // // #define vec(v) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
// // // #define srt(v) sort(v.begin(),v.end());
// // // #define rsrt(v) sort(v.rbegin(),v.rend());
// // // #define gcd(a,b) __gcd(a,b)
// // // #define lcm(a,b) (a*b)/gcd(a,b)
// // // #define PI 2*acos(0.0)
// // // #define lb lower_bound
// // // #define ub upper_bound
// // // #define pr pair<int,int>
// // // #define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
// // // bool answer(int n)
// // // {
// // //     // amar heda
// // //     if(n<=1 || n%2==0) return false;
// // //     if(n%3==0) return true;
// // //     for(ll i=5;i*i<=n;i+=6)
// // //     {
// // //         if(n%i==0 || n%(i+2)==0) return true;
// // //     }
// // //     return false;
// // // }
// // // int main()
// // // {
// // //     AMGR();
// // //     int t;cin>>t;
// // //     for(int i=1;i<=t;i++)
// // //     {
// // //         int n;cin>>n;
// // //         if(answer(n)) cout<<"YES"<<endl;
// // //         else cout<<"NO"<<endl;
// // //     }
// // // }
// // //           /*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */

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
//heda
// ll gcd(ll a, ll b) 
// {
//     if (b == 0) 
//     {
//         return a;
//     }
//     return gcd(b, a % b);
// }
// ll answer(ll a,ll m)
// {
//     ll m0 = m;
//     ll y = 0, x = 1;

//     while (a > 1) 
//     {
//         ll q = a / m;
//         ll t = m;

//         m = a % m;
//         a = t;
//         t = y;

//         y = x - q * y;
//         x = t;
//     }

//     if (x < 0) 
//     {
//         x += m0;
//     }
//     return x;
//}
ll modInverse(ll a, ll m) 
{
    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1) return 0;

    while (a > 1) 
    {
        ll q = a / m;
        ll t = m;

        m = a % m;
        a = t;
        t = y;

        y = (x - q * y) % m0;
        x = t;
    }

    if (x < 0) x += m0;

    return x;
}


bool isper(ll n) 
{
    if (n <= 1) return false;  

    // Check if n is odd
    if (n % 2 == 0) 
    {
        return true;  
    } else {
        
        ll div = n - 2;  
        while (div > 1) 
        {
            if (n % div == 0 && div % 2 != 0) 
            {
                return true;
            }
            div -= 2;  
        }
    }

    return false;
}
int main()
{
    AMGR();
    //test(answer);
    int t;
    cin >> t;

    while (t--) 
    {
        nl;

        if (isper(n)) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }
}
          /*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */
// /*             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+             */
// /**
// * author:TheAnonymousAMGR
// **/
// /* CSTE */
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
// #define ni int n;cin>>n;
// #define nl ll n; cin>>n;
// #define loop for(int i=0;i<n;i++)
// #define loop1 for(int i=1;i<=n;i++)
// #define str string s;cin>>s;
// #define test(fn) int t;cin>>t;while(t--) fn();
// #define array(arr) int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
// #define vec(v) vector<int>v(n);for(int i=0;i<n;i++)cin>>v[i];
// #define srt(v) sort(v.begin(),v.end());
// #define rsrt(v) sort(v.rbegin(),v.rend());
// #define gcd(a,b) __gcd(a,b)
// #define lcm(a,b) (a*b)/gcd(a,b)
// #define PI 2*acos(0.0)
// #define lb lower_bound
// #define ub upper_bound
// #define pr pair<int,int>
// #define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))

// vector<int> div(int n)
// {
//     vector<int> ans;
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             ans.pb(i);
//             ans.pb(n / i);
//         }
//     }
//     return ans;
// }
// void answer()
// {
//      int n;
//     cin >> n;
//     vl v(n + 1);
//     for (int i = 1; i <= n; i++)
//         cin >> v[i];
//     vector<int> divi = div(n);
//     set<int> un(divi.begin(), divi.end());
//     vector<int> uni(un.begin(), un.end());
//     for (int i = 0; i < uni.size(); i++)
//     {
//         for (int j = i + 1; j < uni.size(); j++)
//         {
//             for (int k = uni[i]; k <= uni[j]; k++)
//             {

//                 v[k] += 1;
//             }
//         }
//     }
//     for(int i=0;i<uni.size();i++)
//     {
//         v[uni[i]]++;
//     }
//     for (int i = 1; i <= n; i++)
//         cout << v[i] << " ";
//     cout << endl;

// }
// int main()
// {
//     AMGR();
//     test(answer);
// }
//           /*   ++  --  ++  --  ++  cout<<That's it. Keep coding:)<<endl;  ++  --  ++  --  ++     */
