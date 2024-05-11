//             +-- -- --++-- +-In the name of ALLAH-+ --++-- -- --+
/**
* author:TheAnonymousAMGR
**/
//CSTE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MODU = 1000*1007;
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
 int aaa[MODU];
 int n,k;
void answer()
{
    cin>>n>>k;
    loop1
    {
        cin>>aaa[i];
    }

    int res=0;
    int ress=-1;

    for(int i=2;i<=n;i++)
    {
        int x=aaa[i];
        if(i==k)
        {
            x=aaa[1];
        }
        if(aaa[k]>x)
        {
            res++;
        }
        else {ress=i; break;}

        if(ress!=-1 && ress<k)
        {
            swap(aaa[ress],aaa[k]);
            k=ress;

            int ache=(k>1);
            
            for(int i=k+1;i<=n;i++)
            {
                if(aaa[i]<aaa[k])
                {
                    ache++;
                }
                else break;
            }
            res=max(res,ache);
        }
        cout<<res<<endl;


    }

}
int main()
{
    AMGR();
    tc
    answer();
}