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
bool check(string s){
    // good kina....
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i] == s[i+1])
        {
            return false;
        }
    }
    return true;
}
void khankir_pola(){
    string hauya,t;
    int n,m;
    cin >> n >> m;
    cin >> hauya >> t;
    if(check(hauya))
    {
        cout << "YES" <<endl;
        return;
    }
    if(!check(t))
    {
        cout<< "NO"<<endl;
        return;
    } 
    if((t[0] =='1' && t[t.size()-1] =='0') || (t[0] == '0' && t[t.size()-1] == '1'))
    {
        cout<<"NO" <<endl;
        return;
    } 


    if(t[0] == '1'&& t[t.size()-1] == '1')
    {
        // check 1 1 ache kina.....
        for(int i = 0;i < hauya.size();i++){
            if(hauya[i] == '1' && hauya[i+1] == '1')
            {
                cout << "NO" <<endl;
                return;
            }
        }
        cout <<"YES"<<endl;
    }
    else
    {
        //check 0 0 ......
        for(int i =0;i < hauya.size();i++)
        {
            if(hauya[i] =='0'&&hauya[i+1] == '0')
            {
                cout << "NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}
 
int main()
{
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        khankir_pola();  
    }
}
