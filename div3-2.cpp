#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define fi first
#define se second
#define mod 1000000007
#define inf 1000000000
#define N 200005
int t,n,a[N];
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)a[i]=i*2;
        a[n-1]=3*n-1;
        if(n%2==0)a[n]=3*n-4,a[n-2]=3*n-5;
        else a[n]=3*n-5,a[n-2]=3*n-4;
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
