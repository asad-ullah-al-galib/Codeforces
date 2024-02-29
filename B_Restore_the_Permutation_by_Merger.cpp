// Bismillahir Rahmanir Raheem
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
#define loop for(int i=0;i<n;i++)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pr pair<int,int>
#define AMGR()	(ios_base::sync_with_stdio(false),cin.tie(NULL))
int main()
{
    // int t;cin>>t;while(t--)
    // {
    //     int n;cin>>n;
    //     int A[100001];
    //     for(int i=0;i<sizeof(A);i++)
    //     {
    //         cin>>A[i];
    //     }
    //     std::unordered_set<int> s;
    // for (int i: A) {
    //     s.insert(i);
    // }
 
    // for (int i: s) {
    //     std::cout << i << " ";
    // }
 
    // }
    int t;cin>>t;
    while(t--)
    {
        int n;
        scanf("%d",&n);

        map<int,int>fock;
        for(int i=0;i<2*n;i++)
        {
            int ss;
            cin>>ss;
            if(!fock[ss])
            {
                printf("%d ",ss);
                fock[ss]++;
            }
        }
        cout<<endl;
    }
}

// int main()
// {
// 	int t;
// 	scanf("%d",&t);
	
// 	while(t--)
// 	{
// 		int n;
// 		scanf("%d",&n);
		
// 		map<int,int>mp;
// 		for(int i=0;i<2*n;i++)
// 		{
// 			int x;
// 			scanf("%d",&x);
// 			if(!mp[x])
// 			{
// 				printf("%d ",x);
// 				mp[x]++;
// 			}
// 		}

// 		printf("\n");
// 	}
// }
// }